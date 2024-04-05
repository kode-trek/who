<link rel="stylesheet" href="src.css">

<title>phone-book</title>

<form action="src.php" method="post" enctype="multipart/form-data">
	<table>
		<tr>
			<td>name:</td>
			<td><input type="text" name="name" /></td>
		</tr>
		<tr>
			<td>phone-number:</td>
			<td><input type="text" name="phone" /></td>
		</tr>
		<tr>
			<td>file:</td>
			<td><input type="file" name="image" /></td>
		</tr>
		<tr><td>
			<input type="submit" class="button" />
			<input type="reset" class="button" />
		</td></tr>
	</table>
</form>

<script src="src.js"></script>
