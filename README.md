# IDS-Hombrew

What Will this do?
------------------
This project is about making a host-based IDS that will monitor the anomalies activity of a host. This will be mainly a FIM (File Integrity Monitoring) system.

This HIDS will utilize a signature based detection method. Pre-defined rules will be setup inorder to focus on certain objects.

This system will have a central IDS managment system, and agents. These agents can be despiresd to certain locations to focus on detecting objects.

Main Functionaliies:
--------------------
* have modifiable rules that the users can change
* 
* Monitors the:
  * Internal Systems
    
    * changes to files and directories
    * Checks for file access
    * Running new process
    * Show system logs
      
  * Network activity
    
    * Monitors incoming packets
    * services running at a given time
      
*  Logs the these events
  
    * The events in question will have this format:
      
      * ID | Event Time | Location
     

Will draw inspiration from:
-------------------------

* tripwire


Further Reading:
-----------------

* [What is HIDS](https://www.bulletproof.co.uk/blog/host-based-intrusion-detection-systems)


