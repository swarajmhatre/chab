const users=[]
// addUser removeUser getUser  getuserinroom



const addUser=({id,username,room})=>{
// clean the data
username=username.trim().toLowerCase();
room=room.trim().toLowerCase();

// validate the data
if (!username || !room) {
    return{
        error:'username and room req'
    }
}

// check for exitsting user\
const existingUser=users.find((user) => {
    return user.room=== room && user.username==username
}) 

// validate username
if (existingUser) {
    return{
        error:'user with this name username is already in room - try other name'
    }
}

//  store user
const user={id,username,room}
users.push(user);
return {user}

}
const removeUser=(id)=>{
const index=users.findIndex((user)=>user.id===id)
if (index!=-1) {
    return users.splice(index,1)[0]
}
}
const getUser=(id)=>{
    
    return users.find((user)=>user.id===id)
}

const getUserinroom=(room)=>{
    room1=room.trim().toLowerCase()
    return users.filter((user)=>user.room===room1)
}


module.exports={
    addUser,
    removeUser,
    getUser,
    getUserinroom

}