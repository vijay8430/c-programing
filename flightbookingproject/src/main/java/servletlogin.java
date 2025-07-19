

import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class servletlogin
 */
@WebServlet("/servletlogin")
public class servletlogin extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public servletlogin() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#service(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void service(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		PrintWriter out=response.getWriter();
		String n=request.getParameter("username");
		String p=request.getParameter("password");
		
		try
		{
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/vd","root","Vijaydhembare855");
			PreparedStatement ps=con.prepareStatement("select * from login1 where username=? and password=?");
			ps.setString(1, n);
			ps.setString(2, p);
		    ResultSet rs=ps.executeQuery();
		    if(rs.next())
		    {
		    	HttpSession s=request.getSession();
		    	s.setAttribute("user",rs.getString("username"));
		    	s.setAttribute("pass",rs.getString("password"));
		      request.getRequestDispatcher("Home.jsp").forward(request, response);	
		    }
		    else
		    {
		    	request.getRequestDispatcher("login.jsp").include(request, response);
		    	out.print("<center><font color=red>Invalid username and password!!</font></center>");
		    }
		}catch (Exception e) {
			out.print(e);
		}
		
	}

}
