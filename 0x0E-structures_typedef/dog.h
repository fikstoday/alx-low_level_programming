/**
 * struct dog - dog object
 * @name: pointer to char
 * @age: float parameter
 * @owner: pointer to char
 *
 * Description: dog with name, age, owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
