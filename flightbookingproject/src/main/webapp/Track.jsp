<%@page import="java.sql.DriverManager" %>
<%@page import="java.sql.Connection" %>
<%@page import="java.sql.Statement" %>
<%@page import="java.sql.ResultSet" %>
<%@page import="com.mysql.cj.jdbc.Driver" %>
<%@page import="java.sql.DriverManager"%>
<%@page import="com.mysql.cj.jdbc.Driver"%>
<%@ page import="java.sql.Connection, java.sql.Statement, java.sql.ResultSet" %>

<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<link href="tcss.css" rel="stylesheet"> 
<title>Insert title here</title>
</head>
<body>
<table border="1">
<tr>
<th>Id</th>
<th>Name</th>
<th>email</th>
<th>phone</th>
<th>origin</th>
<th>destination</th>
<th>depature_date</th>
<th>return_date</th>
<th>class</th>
<th>Action</th> 
</tr>
<%

try{
	DriverManager.registerDriver(new Driver());
	Connection con=DriverManager.getConnection("jdbc:mysql://@localhost:3306/ticket","root","Vijaydhembare855");
	Statement st=con.createStatement();
	ResultSet rs=st.executeQuery("select * from booking");
	while(rs.next())
	{
%>
	<tr>
	<td><%=rs.getInt("id") %>
	<td><%= rs.getString("name") %></td>
	<td><%=rs.getString("email") %></td>
	<td><%=rs.getString("phone") %></td>
	<td><%=rs.getString("origin") %></td>
	<td><%=rs.getString("destination") %></td>
	<td><%=rs.getString("depature_date") %></td>
		<td><%=rs.getString("return_date") %></td>
			<td><%=rs.getString("class") %></td>
	<td><a href="Update.jsp?name=<%= rs.getString("name") %>&email=<%=rs.getString("email")%>&phone=<%=rs.getString("phone")%>&origin=<%=rs.getString("origin") %>&destination=<%=rs.getString("destination") %>&depature_date=<%=rs.getString("depature_date") %>&return_date=<%=rs.getString("return_date")%>&class=<%=rs.getString("class")%>&id=<%=rs.getInt("id")%>"><button>UPDATE</button></a> 
	<a href="Delete?id=<%= rs.getInt("id") %>" onclick="return confirm('Are you sure?you want to delete this record?')"><button>DELETE</button></a></td>
	
	</tr>
	<%
	}
	rs.close();
	con.close();
}
catch(Exception e){
	out.print(" error  :"+e);
}
%>
</table>

</body>
</html>