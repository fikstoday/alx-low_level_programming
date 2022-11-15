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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
