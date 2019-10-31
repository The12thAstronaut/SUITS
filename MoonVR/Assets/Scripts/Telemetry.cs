using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;




public class Telemetry
{
    struct Message
    {
        public string msg;
        public DateTime time_out;

    }

    private Queue<Message> msg_list = new Queue<Message>();
    //Time span of 1 second (days, hours, minutes, seconds)
    private TimeSpan delay = new TimeSpan(0,0,0,1);

    private Message createMessage(string msg){
        Message new_message = new Message();
        new_message.msg = msg;
        new_message.time_out = DateTime.Now + delay;
        return new_message;
    }

    public void sendMessage(string msg){
        msg_list.Enqueue(createMessage(msg));
    }
    public string readMessage(){
        if(msg_list.Count>0){
            bool ready = msg_list.Peek().time_out >= DateTime.Now;
            if(ready){
                return msg_list.Dequeue().msg;
            } else return null;
         } else return null;
    }
    public void setDelay(int d){
        delay = new TimeSpan(0,0,0,d);
    }
    public TimeSpan getDelay(){
        return this.delay;
    }
}
