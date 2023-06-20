/**
 * _isalpha - checks for upper and lowercases
 * @c: the ckecked
 * Return: return 1 if checked else 0
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
