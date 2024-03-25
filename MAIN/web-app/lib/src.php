<?php
$fh = fopen("stk.dat", "w") or die("error -- unable to open file!");
$str1="name=".htmlspecialchars($_POST["name"])."\n";
fwrite($fh, $str1);
$str2="phone=".htmlspecialchars($_POST["phone"])."\n";
fwrite($fh, $str2);
fclose($fh);
//
$file_name=$_FILES['image']['name'];
$tmp_file=$_FILES['image']['tmp_name'];
file_put_contents($file_name, fopen($tmp_file, 'r'));
$tmp_dir=time();
system(
	"./src.out ".htmlspecialchars($_POST["name"])." ".$file_name." ".$tmp_dir
);
//
$fh = fopen("LOG.txt", "a") or die("error -- unable to open file!");
fwrite(
	$fh,
	htmlspecialchars($_POST["name"]).", ".htmlspecialchars($_POST["phone"]).", ".$tmp_dir."\n"
);
echo("Done.");
?>
