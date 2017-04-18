<?php
$log_file = 'sound_log.txt'; //log file name
$dbs = $_POST['data'];
date_default_timezone_set['UTC'];
$str = gmdate("M d Y H:i:s", time()). ", ". $data . "\n"; //two fields in one record, the timestamp 
//echo "this is from the server"
//now we open the file
if(file_exists($log_file)){
	$fp=fopen($log_file, "a");
	fwrite($fp, $str);
	fclose($fp);
	}
else{
	$fp = fopen($log_file, "w");
	fwrite($fp, $str);
	fclose($fp);
	}
echo "Data is stored\n"; //echo something back to the raspberry pi
?>
