<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<link href="signup.css" rel="stylesheet">
</head>
<body>
<div align="center">
<h1>Signup page</h1>
</div>
<form action="signup" method="post">
<div align="center">
<table>
<tr>
<td>username<input type="text" name="username" required></td>
</tr>
<tr>
<td>password<input type="password" name="password" required="required"></td>
</tr>
<tr>
<td>conformpassword<input type="password" name="conformpassword" required="required"></td>
</tr>
<tr>
<td><button class="login1.jsp">Signup</button></td>
</tr>
</table>
</div>
</form>
</body>
</html>