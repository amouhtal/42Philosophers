/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_one.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <jereligi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 12:08:00 by Jeanxavier        #+#    #+#             */
/*   Updated: 2020/09/17 17:37:59 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHILO_ONE_H
# define __PHILO_ONE_H

# include "../../lib/header/philo.h"

typedef struct				s_philo
{
	pthread_t			thread;
	pthread_mutex_t		*fork1;
	pthread_mutex_t		*fork2;
	pthread_mutex_t		*display;
	unsigned int		id;
	unsigned int		last_meal;
	unsigned int		time_action;
	unsigned int		is_dead;
	t_data_philo		*data_philo;
}							t_philo;

/*
** init_philo.c
*/
void						init_philo(t_data_philo *data_philo,
							t_philo *philo);
/*
** event_philosophers.c
*/
void						take_fork(t_philo *philo);
void						put_down_fork(t_philo *philo);
void						philo_eat(t_philo *philo);
void						philo_sleep(t_philo *philo);
void						philo_think(t_philo *philo);

int							current_time(t_philo *philo);
void						philo_is_dead(t_philo *philo);

#endif
