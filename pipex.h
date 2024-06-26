/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btvildia <btvildia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:11:52 by btvildia          #+#    #+#             */
/*   Updated: 2024/04/18 21:08:55 by btvildia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

typedef struct s_pipex
{
	char	**cmd1;
	char	**cmd2;
	char	*file1;
	char	*file2;
	char	*path;
	char	*path1;
	char	*path2;
	char	**envp;
	int		infile;
	int		outfile;
}			t_pipex;

void		here_doc(char *limiter);
char		*ft_reallocate(char *s1, char *s2);
char		*ft_strjoin_null(char *s2);
char		*ft_nline(char *s, int c);
int			open_file(char *argv, int i);
char		*get_next_line(int fd);
void		ft_execve(char *argv, char **envp);
void		ft_error_exit(char *str, char *str2, int status);
char		*find_path(char *cmd, char *path);
void		child_process1(t_pipex *pipex, char *path1, int input, int *fd);
void		child_process2(t_pipex *pipex, char *path2, int output, int *fd);
int			ft_strncmp(char *s1, char *s2, int n);
char		*ft_strncpy(char *s1, char *s2, int n);
int			ft_strlen(char *c);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strdup(char *s1);
char		**ft_split(char *s, char c);
void		free_array(char **arr);

#endif
