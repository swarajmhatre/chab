const generateMessage=(username,text)=>{
    return{
        username,
        text,
        createat: new Date().getTime()
      }
}
const generateMessagelocation=(username,url)=>{
    return{
        username,
        url,
        createat: new Date().getTime()
      }

}
module.exports = {
    generateMessage,
    generateMessagelocation
}