<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<link href="contact.css" rel="stylesheet">
</head>
<body>

<div class="contact-section">
    <h2>Get in Touch</h2>
    <div class="contact-container">
        <div class="contact-info">
            <h3>Contact Information</h3>
            <p>Phone: +918010976395</p>
            <p>Email: <a href="mailto:info@flightbooking.com">vijaydhembare8430@gmail.com</a></p>
            <p>Address: Solapur </p>
        </div>
        <div class="contact-form">
            <h3>Send Us a Message</h3>
            <form action="contactservlet" method="post">
                <label for="name">Name:</label>
                <input type="text" id="name" name="name" required><br><br>
                <label for="email">Email:</label>
                <input type="email" id="email" name="email" required><br><br>
                <label for="message">Message:</label>
                <textarea id="message" name="message required"></textarea><br><br>
                <button type="submit">Send Message</button>
            </form>
        </div>
    </div>
</div>


</body>
</html>`