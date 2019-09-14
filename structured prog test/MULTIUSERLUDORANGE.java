import java.util.Random;
public class MULTIUSERLUDORANGE {
	public static void main(String args[])
	{
		Random mydice=new Random();		
		System.out.print("\nUSER 1\t\tUSER 2 \t\t USER3 \t\tUSER 4");
		for (int i=0;i<5;i++)
		{
		 int user1=1+mydice.nextInt(6);
	     int user2=1+mydice.nextInt(6);
		 int user3=1+mydice.nextInt(6);
		 int user4=1+mydice.nextInt(6);
		System.out.printf("\n%d\t\t%d\t\t%d\t\t%d",user1,user2,user3,user4);
		//processing section
		user1=user1+i;
		user2=user2+i;
		user3=user3+i;
		user4=user4+i;
		//checking for the highest score
		if (user1<user2)
			user1=user2;
		else if (user1<user3)
			user1=user3;
		else if (user1<user4)
			user1=user4;
		System.out.printf("the winner with highest score %d",user1);
	}
}
}
