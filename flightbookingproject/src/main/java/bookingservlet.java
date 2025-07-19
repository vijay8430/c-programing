
import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.Date;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.mysql.cj.jdbc.Driver;

@WebServlet("/bookingservlet")
public class bookingservlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
    public bookingservlet() {
        super();
        // TODO Auto-generated constructor stub
    }
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
	 PrintWriter out=response.getWriter();
	
	 String nm=request.getParameter("name");
	 String em=request.getParameter("email");
	 String ph=request.getParameter("phone");
	 String or=request.getParameter("origin");
	 String de=request.getParameter("destination");
	 String dep=request.getParameter("departure-date");
	 String re=request.getParameter("return-date");
	 String cl=request.getParameter("class");
	try {
		DriverManager.registerDriver(new Driver());
		Connection conn=DriverManager.getConnection("jdbc:mysql://localhost:3306/ticket","root","Vijaydhembare855");
		PreparedStatement pt=conn.prepareStatement("insert into booking (name,email,phone,origin,destination,depature_date,return_date,class) values(?,?,?,?,?,?,?,?)");
		pt.setString(1, nm);
		pt.setString(2, em);
		pt.setString(3, ph);
		pt.setString(4, or);
		pt.setString(5, de);
		pt.setString(6, dep);
		pt.setString(7, re);
		pt.setString(8, cl);
	 int d=pt.executeUpdate();
	 if(d>0)
	 {
		out.print("data inserted successfully");
	 }
			conn.close();
	} catch (SQLException e) {
		// TODO Auto-generated catch block
		out.print(e);
	}
	}

}
