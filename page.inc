<?php
#(C) Copyright 2009-2011 Nicholas Paun. All Rights Reserved.
#MintPhoto: a simple photo gallery
 
#Page header and footer functions for MintPhoto

function page_header($_MINT)
 {
  //This function prints headers
  $title = $_MINT['title'];
  $REQUEST_URI = $_SERVER['SCRIPT_NAME']; 
  $stylesheet = dirname($REQUEST_URI)."/".$_MINT['stylesheet']; #Prevents PATH_INFO screwing
  
  echo <<<HEADER
<?xml version="1.0" encoding="UTF-8" ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.1//EN" "http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<!-- Powered by MintPhoto 0.43 -->
<title>$title</title>
<link rel="stylesheet" href="$stylesheet" />
</head>
<body>
 <h1 class="mintphoto-title">$title</h1>
 <div class="mintphoto-content">
  <br />
HEADER;
}

function page_footer($_MINT)
 {
  //This function ends the HTML
  echo("   <br /><br />\n");
  echo <<<FOOTER
  </div>
 </body>
</html>
FOOTER;
}
?>