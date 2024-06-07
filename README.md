# IDS-Hombrew

What Will this do?
------------------
This project is about making a host-based IDS that will monitor the anomalies activity of a host. This will be mainly a FIM (File Integrity Monitoring) system.

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
* tripwire
