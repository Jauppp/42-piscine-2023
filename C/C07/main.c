# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    main                                               :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdomet-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 18:37:41 by cdomet-d          #+#    #+#              #
#    Updated: 2023/07/20 18:38:51 by cdomet-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

//ex00 ~ ft_strdup.c
int     main(void)
{
        #include <string.h>
        #include <stdio.h>
        char    *src = "copy this bs please";
        char    *copy = ft_strdup(src);
        printf("%s\n", copy);
        printf("%s\n", copy);
        free(copy);
}

//ex01 ~ ft_range.c
void    print_tab(int *tab, int size)
{           
        #include <stdio.h>
        int     i;  
        int     j;  

        i = 0;
        j = 0;
        while (i < size)
        {   
                printf("%d ", tab[i]);
                i++;    
                j++;
                if (j == 6)
                {           
                        printf("\n");
                        j = 0;
                }   
        }   
}

int     main(void)
{           
        int     *tab;
        int     size;
        int     min;
        int     max;

        min = 20; 
        max = 41; 
        size = max - min;
        tab = ft_range(min, max);
        print_tab(tab, size);
        free(tab);
}

//ex02 ~ ft_ultimate_range.c
int     main(void)
{
        #include <stdio.h>
        int     *range;
        int r;
        int i;
        range = NULL;

        r = ft_ultimate_range(&range, 5, 15);
        i = -1;
        printf("%d\n", r);
        while (++i < r)
        {
                printf("%d ", range[i]);
        }
        free(range);
}

//ex03 ~ ft_strjoin.c
int     main(void)
{
        char    *sep = " ﾟ☾ ﾟ｡ ⋆ ";
        char    *str;
        char    *strstr[5] = {"I", "love", "you", "Kitten", "(✿◠‿◠)"};

        str = ft_strjoin(5, strstr, sep);
        printf("%s\n", str);
        free(str);
}

