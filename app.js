//jshint esversion:6
const http=require('http');
const express = require("express");
const socketio=require("socket.io")
const bodyParser = require("body-parser");
const ejs = require("ejs");
const _ = require("lodash");
const Filter=require("bad-words")
const mongoose = require("mongoose");
const {generateMessage,generateMessagelocation }=require('./utils/messages')
const {addUser,removeUser,getUser,getUserinroom}=require('./utils/users');

const app = express();

const server=http.createServer(app);
const io= socketio(server);
app.set("view engine", "ejs");
app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static("public"));


//date 


io.on('connection',(socket)=>{
  console.log("new connection");



socket.on('join',({username,room},callback)=>{
const {error,user}=addUser({id:socket.id ,username,room})

if (error) {
 return  callback(error)
}
  socket.join(user.room);

  socket.emit('message',generateMessage(`welcome ${user.username}`));
  socket.broadcast.to(user.room).emit('message',generateMessage(`${user.username} has join the room`));
  io.to(user.room).emit('roomdata',{
    room:user.room,
    users:getUserinroom(user.room)
  })
callback()
})



  socket.on('smsg',(message,callback)=>{
    const user=getUser(socket.id)
  const filter = new Filter()
  if(! filter.isProfane(message)){
    io.to(user.room).emit('message',generateMessage(user.username,message));
    callback();
  } 
  else{
    return callback('bad words are not alloewd');
  }
  })
  socket.on('disconnect',()=>{
    const user=removeUser(socket.id);
    if (user) {
      io.to(user.room).emit('message',generateMessage(`${user.username}  has left`))
      io.to(user.room).emit('roomdata',{
        room:user.room,
        users:getUserinroom(user.room)
      })
    }

    
  })
  socket.on('sendlocation',(coords,callback)=>{
  const user=getUser(socket.id)
    io.to(user.room).emit('locationmessage',generateMessagelocation(user.username,`https://google.com/maps?q=${coords.latitude},${coords.longitude}`));
    callback();
  })


})


  



let port= process.env.PORT;
if (port==null ||port=="") {
  port=3012;
}
server.listen(port ,() => {
  console.log("view in 3012 port");
});

