<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>login page</title>
<link href="style1.css" rel="stylesheet">
</head>
<body>
<div align="center">
<h1 style="color: white">Login Page</h1>
<form action="servletlogin" method="post">
<table>
<tr>
<td><input type="text" name="username" placeholder="username" required="required"></td>
</tr>
<tr>
<td><input type="password" name="password" placeholder="password" required="required"></td>
</tr>
<tr>
<td><button class="login-button">Login</button></td>
</tr>
<tr>
<td><a href="signup.jsp">Signup</a></td>
</tr>
</table>
</form>
</div>
</body>
</html>