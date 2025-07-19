<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
  <div class="form-wrapper">
        <form action="Update" method="post">
            Booking ID: <input type="text" id="bookingId" name="bookingId" value="${param.id}" readonly="readonly"><br>
            Name: <input type="text" id="name" name="name" value="${param.name}" required="required"><br>
            Email: <input type="email" id="email" name="email" value="${param.email}" required="required"><br>
            Phone: <input type="text" id="phone" name="phone" value="${param.phone}" required="required"><br>

            Origin:
            <select name="origin" required="required">
                <option value="New York" ${param.origin=='New York'?'selected':''}>New York</option>
                <option value="Los Angeles" ${param.origin=='Los Angeles'?'selected':''}>Los Angeles</option>
                <option value="Chicago" ${param.origin=='Chicago'?'selected':''}>Chicago</option>
            </select><br>

            Destination:
            <select name="destination" required="required">
                <option value="New York" ${param.destination=='New York'?'selected':''}>New York</option>
                <option value="Los Angeles" ${param.destination=='Los Angeles'?'selected':''}>Los Angeles</option>
                <option value="Chicago" ${param.destination=='Chicago'?'selected':''}>Chicago</option>
            </select><br>

            Departure Date: <input type="date" name="depature_date" value="${param.depature_date}" required="required"><br>
            Return Date: <input type="date" name="return_date" value="${param.return_date}"><br>

            Class:
            <select name="class" required="required">
                <option value="Economy" ${param['class']=='Economy'?'selected':''}>Economy</option>
                <option value="Premium Economy" ${param['class']=='Premium Economy'?'selected':''}>Premium Economy</option>
                <option value="Business" ${param['class']=='Business'?'selected':''}>Business</option>
                <option value="First Class" ${param['class']=='First Class'?'selected':''}>First Class</option>
            </select><br>

            <input type="submit" value="Update Booking"><br>
        </form>
    </div>
</body>
</html>