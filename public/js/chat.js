const socket= io();
const $messageform=document.querySelector('#msg-form-sub')
const $messageforminput=$messageform.querySelector('input')
const $messageformbtn=$messageform.querySelector('button')
const $sendliocbtn=document.querySelector('#send-location')
const $message=document.querySelector('#messages')



const messagetemp=document.querySelector('#message-template').innerHTML
const loctemp =document.querySelector('#loc-message-template').innerHTML
const sidebartemp=document.querySelector('#sidebar-template').innerHTML
// options
const {username,room}=Qs.parse(location.search,{
  ignoreQueryPrefix:true
})

const autoscroll=()=>{
  const $newmsg=$message.lastElementChild
// height of new msg
const newmsgstyle=getComputedStyle($newmsg)
const newmsgmargin=parseInt(newmsgstyle.marginBottom)
const newMesheight=$newmsg.offsetHeight+newmsgmargin
// visiable height
const vheight=$message.offsetHeight

// height of msg contain
const msgconhe=$message.scrollHeight
// how far i scrolled?
const scrolloffset=$message.scrollTop+vheight
if (msgconhe-2*newMesheight <= scrolloffset) {
  $message.scrollTop= $message.scrollHeight
}
//else{
 // $message.scrollTop= $message.scrollHeight
//}
}


socket.on('message',(message)=>{
   console.log(message)
     const html=Mustache.render(messagetemp,{
      username:message.username,
       message:message.text,
       create:moment(message.createat).format('h:mm a')
     });
     $message.insertAdjacentHTML('beforeend',html);
     autoscroll();
})
socket.on('locationmessage',(message)=>{
  console.log(message)
    const html=Mustache.render(loctemp,{
      username:message.username,
      url:message.url,
      create:moment(message.createat).format('h:mm a')
    });
    $message.insertAdjacentHTML('beforeend',html);
    autoscroll();
})
 

socket.on('roomdata',({room,users})=>{
  const html=Mustache.render(sidebartemp,{
    room,
    users
  });
  document.querySelector('#sidebar').innerHTML=html;



})




$messageform.addEventListener('submit',(e)=>{
  e.preventDefault();
  $messageformbtn.setAttribute('disabled','disabled')
const message=e.target.elements.message.value;
    socket.emit('smsg',message,(err)=>{
      $messageformbtn.removeAttribute('disabled')
      $messageforminput.value='';
      $messageforminput.focus();  
      if (err) {
        return console.log(err);
      }  
      console.log('the msg was delerived');
    });
}) 


$sendliocbtn.addEventListener('click',()=>{
  if(!navigator.geolocation){
    return alert('geo location not supported by browser');
  }
$sendliocbtn.setAttribute('disabled','disabled')

  navigator.geolocation.getCurrentPosition((position)=>{
console.log(position);
socket.emit('sendlocation',{
  latitude:position.coords.latitude,
  longitude:position.coords.longitude
},()=>{
  $sendliocbtn.removeAttribute('disabled')
  console.log('location shered')
})
  })
});

socket.emit('join',{username,room},(error)=>{
if (error) {
  alert(error)
  location.href='/';
}
})


