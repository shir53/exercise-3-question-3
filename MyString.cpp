bool MyString::operator!=(MyString& s)
{
	bool check=true;
	int x = strcmp(s.string, string);
	if ((x != 0) && (length == s.length))//במקרה שהמחרוזות יצאו שונות, אבל האורך שלהן שווה
	{
		for (int i = 0; i < length; i++)
			if ((string[i] != s.string[i]) || (string[i] - s.string[i] != 32) || (string[i] - s.string[i] != -32))
				check=false;//אם באותו אינדקס אין את אותה אות בדיוק, או שאחת קטנה ואחת גדולה
		if (check)
			return true;
	}
	return (strcmp(s.string, string));
}
