

import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class Update
 */
@WebServlet("/Update")
public class Update extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Update() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		int bookingId = Integer.parseInt(request.getParameter("bookingId"));
		String name = request.getParameter("name");
		String email = request.getParameter("email");
		String phone = request.getParameter("phone");
		String origin = request.getParameter("origin");
		String destination = request.getParameter("destination");
		String departureDate = request.getParameter("depature_date"); // Watch the typo
		String returnDate = request.getParameter("return_date");
		String travelClass = request.getParameter("class"); // Rename from 'class' to avoid confusion

		try {
		    Class.forName("com.mysql.cj.jdbc.Driver");
		    Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/ticket", "root", "Vijaydhembare855");

		    String query = "UPDATE booking  SET name=?, email=?, phone=?, origin=?, destination=?, depature_date=?, return_date=?, class=? WHERE id=?";
		    PreparedStatement ps = con.prepareStatement(query);

		    ps.setString(1, name);
		    ps.setString(2, email);
		    ps.setString(3, phone);
		    ps.setString(4, origin);
		    ps.setString(5, destination);
		    ps.setString(6, departureDate);
		    ps.setString(7, returnDate);
		    ps.setString(8, travelClass);
		    ps.setInt(9, bookingId);

		    int r = ps.executeUpdate();
		    if(r>0)
		    {
		    	request.getRequestDispatcher("Track.jsp").forward(request, response);
		    	
		    }
		    // handle success/failure
		} catch (Exception e) {
		    e.printStackTrace();
		}

	}

}
