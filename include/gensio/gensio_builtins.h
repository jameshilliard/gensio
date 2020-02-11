/*
 *  gensio - A library for abstracting stream I/O
 *  Copyright (C) 2018  Corey Minyard <minyard@acm.org>
 *
 *  SPDX-License-Identifier: LGPL-2.1-only
 */

/*
 * These are the interface functions for built-in gensios.
 */

#ifndef GENSIO_BUILTINS_H
#define GENSIO_BUILTINS_H

#include <gensio/gensio.h>

#ifdef __cplusplus
extern "C" {
#endif
   
/*
 * Allocators for the various gensio accepter types, compatible with
 * register_gensio_accepter().
 */
int str_to_tcp_gensio_accepter(const char *str, const char * const args[],
			       struct gensio_os_funcs *o,
			       gensio_accepter_event cb,
			       void *user_data,
			       struct gensio_accepter **new_acc);
int str_to_udp_gensio_accepter(const char *str, const char * const args[],
			       struct gensio_os_funcs *o,
			       gensio_accepter_event cb,
			       void *user_data,
			       struct gensio_accepter **new_acc);
int str_to_sctp_gensio_accepter(const char *str, const char * const args[],
				struct gensio_os_funcs *o,
				gensio_accepter_event cb,
				void *user_data,
				struct gensio_accepter **new_acc);
int str_to_unix_gensio_accepter(const char *str, const char * const args[],
				struct gensio_os_funcs *o,
				gensio_accepter_event cb,
				void *user_data,
				struct gensio_accepter **new_acc);
int str_to_stdio_gensio_accepter(const char *str, const char * const args[],
				 struct gensio_os_funcs *o,
				 gensio_accepter_event cb,
				 void *user_data,
				 struct gensio_accepter **new_acc);
int str_to_dummy_gensio_accepter(const char *str, const char * const args[],
				 struct gensio_os_funcs *o,
				 gensio_accepter_event cb,
				 void *user_data,
				 struct gensio_accepter **acc_gensio);
int str_to_ssl_gensio_accepter(const char *str, const char * const args[],
			       struct gensio_os_funcs *o,
			       gensio_accepter_event cb,
			       void *user_data,
			       struct gensio_accepter **new_acc);
int str_to_mux_gensio_accepter(const char *str, const char * const args[],
			       struct gensio_os_funcs *o,
			       gensio_accepter_event cb,
			       void *user_data,
			       struct gensio_accepter **new_acc);
int str_to_certauth_gensio_accepter(const char *str, const char * const args[],
				    struct gensio_os_funcs *o,
				    gensio_accepter_event cb,
				    void *user_data,
				    struct gensio_accepter **acc);
int str_to_telnet_gensio_accepter(const char *str, const char * const args[],
				  struct gensio_os_funcs *o,
				  gensio_accepter_event cb,
				  void *user_data,
				  struct gensio_accepter **acc_gensio);
int str_to_msgdelim_gensio_accepter(const char *str, const char * const args[],
				    struct gensio_os_funcs *o,
				    gensio_accepter_event cb,
				    void *user_data,
				    struct gensio_accepter **new_acc);
int str_to_relpkt_gensio_accepter(const char *str, const char * const args[],
				  struct gensio_os_funcs *o,
				  gensio_accepter_event cb,
				  void *user_data,
				  struct gensio_accepter **new_acc);
int str_to_trace_gensio_accepter(const char *str, const char * const args[],
				 struct gensio_os_funcs *o,
				 gensio_accepter_event cb,
				 void *user_data,
				 struct gensio_accepter **new_acc);

/*
 * Allocators for the various gensio types, compatible with
 * register_gensio().
 */
int str_to_tcp_gensio(const char *str, const char * const args[],
		      struct gensio_os_funcs *o,
		      gensio_event cb, void *user_data,
		      struct gensio **new_gensio);
int str_to_udp_gensio(const char *str, const char * const args[],
		      struct gensio_os_funcs *o,
		      gensio_event cb, void *user_data,
		      struct gensio **new_gensio);
int str_to_sctp_gensio(const char *str, const char * const args[],
		       struct gensio_os_funcs *o,
		       gensio_event cb, void *user_data,
		       struct gensio **new_gensio);
int str_to_unix_gensio(const char *str, const char * const args[],
		       struct gensio_os_funcs *o,
		       gensio_event cb, void *user_data,
		       struct gensio **new_gensio);
int str_to_stdio_gensio(const char *str, const char * const args[],
			struct gensio_os_funcs *o,
			gensio_event cb, void *user_data,
			struct gensio **new_gensio);
int str_to_pty_gensio(const char *str, const char * const args[],
		      struct gensio_os_funcs *o,
		      gensio_event cb, void *user_data,
		      struct gensio **new_gensio);
int str_to_ssl_gensio(const char *str, const char * const args[],
		      struct gensio_os_funcs *o,
		      gensio_event cb, void *user_data,
		      struct gensio **new_gensio);
int str_to_mux_gensio(const char *str, const char * const args[],
		      struct gensio_os_funcs *o,
		      gensio_event cb, void *user_data,
		      struct gensio **new_gensio);
int str_to_certauth_gensio(const char *str, const char * const args[],
			   struct gensio_os_funcs *o,
			   gensio_event cb, void *user_data,
			   struct gensio **new_gensio);
int str_to_telnet_gensio(const char *str, const char * const args[],
			 struct gensio_os_funcs *o,
			 gensio_event cb, void *user_data,
			 struct gensio **new_gensio);
int str_to_serialdev_gensio(const char *str, const char * const args[],
			    struct gensio_os_funcs *o,
			    gensio_event cb, void *user_data,
			    struct gensio **new_gensio);
int str_to_ipmisol_gensio(const char *str, const char * const args[],
			  struct gensio_os_funcs *o,
			  gensio_event cb, void *user_data,
			  struct gensio **new_gensio);
int str_to_echo_gensio(const char *str, const char * const args[],
		       struct gensio_os_funcs *o,
		       gensio_event cb, void *user_data,
		       struct gensio **new_gensio);
int str_to_file_gensio(const char *str, const char * const args[],
		       struct gensio_os_funcs *o,
		       gensio_event cb, void *user_data,
		       struct gensio **new_gensio);
int str_to_msgdelim_gensio(const char *str, const char * const args[],
			   struct gensio_os_funcs *o,
			   gensio_event cb, void *user_data,
			   struct gensio **new_gensio);
int str_to_relpkt_gensio(const char *str, const char * const args[],
			 struct gensio_os_funcs *o,
			 gensio_event cb, void *user_data,
			 struct gensio **new_gensio);
int str_to_trace_gensio(const char *str, const char * const args[],
			struct gensio_os_funcs *o,
			gensio_event cb, void *user_data,
			struct gensio **new_gensio);


/*
 * Allocators for accepters for different I/O types.
 */
int tcp_gensio_accepter_alloc(struct addrinfo *ai, const char * const args[],
			      struct gensio_os_funcs *o,
			      gensio_accepter_event cb,
			      void *user_data,
			      struct gensio_accepter **accepter);

int udp_gensio_accepter_alloc(struct addrinfo *ai, const char * const args[],
			      struct gensio_os_funcs *o,
			      gensio_accepter_event cb,
			      void *user_data,
			      struct gensio_accepter **accepter);

int sctp_gensio_accepter_alloc(struct addrinfo *ai, const char * const args[],
			       struct gensio_os_funcs *o,
			       gensio_accepter_event cb,
			       void *user_data,
			       struct gensio_accepter **accepter);

int stdio_gensio_accepter_alloc(const char * const args[],
				struct gensio_os_funcs *o,
				gensio_accepter_event cb,
				void *user_data,
				struct gensio_accepter **accepter);

int dummy_gensio_accepter_alloc(const char * const args[],
				struct gensio_os_funcs *o,
				gensio_accepter_event cb,
				void *user_data,
				struct gensio_accepter **accepter);

int ssl_gensio_accepter_alloc(struct gensio_accepter *child,
			      const char * const args[],
			      struct gensio_os_funcs *o,
			      gensio_accepter_event cb,
			      void *user_data,
			      struct gensio_accepter **accepter);

int mux_gensio_accepter_alloc(struct gensio_accepter *child,
			      const char * const args[],
			      struct gensio_os_funcs *o,
			      gensio_accepter_event cb,
			      void *user_data,
			      struct gensio_accepter **accepter);

int certauth_gensio_accepter_alloc(struct gensio_accepter *child,
				   const char * const args[],
				   struct gensio_os_funcs *o,
				   gensio_accepter_event cb, void *user_data,
				   struct gensio_accepter **accepter);

int telnet_gensio_accepter_alloc(struct gensio_accepter *child,
				 const char * const args[],
				 struct gensio_os_funcs *o,
				 gensio_accepter_event cb,
				 void *user_data,
				 struct gensio_accepter **accepter);

int msgdelim_gensio_accepter_alloc(struct gensio_accepter *child,
				   const char * const args[],
				   struct gensio_os_funcs *o,
				   gensio_accepter_event cb,
				   void *user_data,
				   struct gensio_accepter **accepter);

int relpkt_gensio_accepter_alloc(struct gensio_accepter *child,
				 const char * const args[],
				 struct gensio_os_funcs *o,
				 gensio_accepter_event cb,
				 void *user_data,
				 struct gensio_accepter **accepter);

int trace_gensio_accepter_alloc(struct gensio_accepter *child,
				const char * const args[],
				struct gensio_os_funcs *o,
				gensio_accepter_event cb,
				void *user_data,
				struct gensio_accepter **accepter);

/* Client allocators. */

/*
 * Create a TCP gensio for the given ai.
 */
int tcp_gensio_alloc(struct addrinfo *ai, const char * const args[],
		     struct gensio_os_funcs *o,
		     gensio_event cb, void *user_data,
		     struct gensio **new_gensio);

/*
 * Create a UDP gensio for the given ai.  It uses the first entry in
 * ai.
 */
int udp_gensio_alloc(struct addrinfo *ai, const char * const args[],
		     struct gensio_os_funcs *o,
		     gensio_event cb, void *user_data,
		     struct gensio **new_gensio);

/*
 * Create a SCTP gensio for the given ai.
 */
int sctp_gensio_alloc(struct addrinfo *ai, const char * const args[],
		      struct gensio_os_funcs *o,
		      gensio_event cb, void *user_data,
		      struct gensio **new_gensio);

/* Run a program (in argv[0]) and attach to it's stdio. */
int stdio_gensio_alloc(const char *const argv[], const char * const args[],
		       struct gensio_os_funcs *o,
		       gensio_event cb, void *user_data,
		       struct gensio **new_gensio);

/* Run a program (in argv[0]) in a pty and attach to the pty master. */
int pty_gensio_alloc(const char * const argv[], const char * const args[],
		     struct gensio_os_funcs *o,
		     gensio_event cb, void *user_data,
		     struct gensio **new_gensio);

int serialdev_gensio_alloc(const char *devname, const char * const args[],
			   struct gensio_os_funcs *o,
			   gensio_event cb, void *user_data,
			   struct gensio **io);

int ipmisol_gensio_alloc(const char *devname, const char * const args[],
			 struct gensio_os_funcs *o,
			 gensio_event cb, void *user_data,
			 struct gensio **io);

int echo_gensio_alloc(const char * const argv[], const char * const args[],
		      struct gensio_os_funcs *o,
		      gensio_event cb, void *user_data,
		      struct gensio **new_gensio);

/*
 * Filter gensios
 */
int ssl_gensio_alloc(struct gensio *child, const char * const args[],
		     struct gensio_os_funcs *o,
		     gensio_event cb, void *user_data,
		     struct gensio **io);

int mux_gensio_alloc(struct gensio *child, const char * const args[],
		     struct gensio_os_funcs *o,
		     gensio_event cb, void *user_data,
		     struct gensio **io);

int certauth_gensio_alloc(struct gensio *child, const char * const args[],
			  struct gensio_os_funcs *o,
			  gensio_event cb, void *user_data,
			  struct gensio **net);

int telnet_gensio_alloc(struct gensio *child, const char * const args[],
			struct gensio_os_funcs *o,
			gensio_event cb, void *user_data,
			struct gensio **io);

int msgdelim_gensio_alloc(struct gensio *child, const char * const args[],
			  struct gensio_os_funcs *o,
			  gensio_event cb, void *user_data,
			  struct gensio **io);

int relpkt_gensio_alloc(struct gensio *child, const char * const args[],
			struct gensio_os_funcs *o,
			gensio_event cb, void *user_data,
			struct gensio **io);

int trace_gensio_alloc(struct gensio *child, const char * const args[],
		       struct gensio_os_funcs *o,
		       gensio_event cb, void *user_data,
		       struct gensio **io);

#ifdef __cplusplus
}
#endif

#endif /* GENSIO_BUILTINS_H */
