#include "graph.h"
		options->submodule_format = DIFF_SUBMODULE_LOG;
		options->submodule_format = DIFF_SUBMODULE_SHORT;
	else if (!strcmp(value, "diff"))
		options->submodule_format = DIFF_SUBMODULE_INLINE_DIFF;
		width = term_columns() - strlen(line_prefix);
		if (p->one->oid_valid && p->two->oid_valid)
			content_changed = oidcmp(&p->one->oid, &p->two->oid);
	diff_set_mnemonic_prefix(o, "a/", "b/");
	if (DIFF_OPT_TST(o, REVERSE_DIFF)) {
		a_prefix = o->b_prefix;
		b_prefix = o->a_prefix;
	} else {
		a_prefix = o->a_prefix;
		b_prefix = o->b_prefix;
	}

	if (o->submodule_format == DIFF_SUBMODULE_LOG &&
	    (!one->mode || S_ISGITLINK(one->mode)) &&
	    (!two->mode || S_ISGITLINK(two->mode))) {
				&one->oid, &two->oid,
				two->dirty_submodule,
	} else if (o->submodule_format == DIFF_SUBMODULE_INLINE_DIFF &&
		   (!one->mode || S_ISGITLINK(one->mode)) &&
		   (!two->mode || S_ISGITLINK(two->mode))) {
		const char *del = diff_get_color_opt(o, DIFF_FILE_OLD);
		const char *add = diff_get_color_opt(o, DIFF_FILE_NEW);
		show_submodule_inline_diff(o->file, one->path ? one->path : two->path,
				line_prefix,
				&one->oid, &two->oid,
				two->dirty_submodule,
				meta, del, add, reset, o);
		return;
			if (!oidcmp(&one->oid, &two->oid)) {
	same_contents = !oidcmp(&one->oid, &two->oid);
		hashcpy(spec->oid.hash, sha1);
		spec->oid_valid = sha1_valid;
	/*
	 * Similarly, if we'd have to convert the file contents anyway, that
	 * makes the optimization not worthwhile.
	 */
	if (!want_file && would_convert_to_git(name))
		return 0;

	strbuf_addf(&buf, "Subproject commit %s%s\n",
		    oid_to_hex(&s->oid), dirty);
	if (!s->oid_valid ||
	    reuse_worktree_file(s->path, s->oid.hash, 0)) {
			type = sha1_object_info(s->oid.hash, &s->size);
				die("unable to read %s",
				    oid_to_hex(&s->oid));
		s->data = read_sha1_file(s->oid.hash, &type, &s->size);
			die("unable to read %s", oid_to_hex(&s->oid));
			   const struct object_id *oid,
	oid_to_hex_r(temp->hex, oid);
	    (!one->oid_valid ||
	     reuse_worktree_file(name, one->oid.hash, 1))) {
				       (one->oid_valid ?
					&one->oid : &null_oid),
				       (one->oid_valid ?
			if (!one->oid_valid)
				sha1_to_hex_r(temp->hex, one->oid.hash);
			       &one->oid, one->mode);
	if (one && two && oidcmp(&one->oid, &two->oid)) {
			    find_unique_abbrev(one->oid.hash, abbrev));
		strbuf_addstr(msg, find_unique_abbrev(two->oid.hash, abbrev));
		if (!one->oid_valid) {
				oidclr(&one->oid);
			if (index_path(one->oid.hash, one->path, &st, 0))
		oidclr(&one->oid);
		options->submodule_format = DIFF_SUBMODULE_LOG;
	else if ((argcount = parse_long_opt("line-prefix", av, &optarg))) {
		options->line_prefix = optarg;
		options->line_prefix_length = strlen(options->line_prefix);
		graph_setup_line_prefix(options);
		return argcount;
	}
		if (options->use_color != GIT_COLOR_ALWAYS)
			options->use_color = GIT_COLOR_NEVER;
			diff_unique_abbrev(p->one->oid.hash, opt->abbrev));
		fprintf(opt->file, "%s ",
			diff_unique_abbrev(p->two->oid.hash, opt->abbrev));
	if (one->oid_valid && two->oid_valid &&
	    !oidcmp(&one->oid, &two->oid) &&
	if (!one->oid_valid && !two->oid_valid)
		s->oid_valid ? oid_to_hex(&s->oid) : "");
		else if (oidcmp(&p->one->oid, &p->two->oid) ||
			 is_null_oid(&p->one->oid))
static int diff_get_patch_id(struct diff_options *options, unsigned char *sha1, int diff_header_only)
		if (diff_header_only)
			continue;

		if (fill_mmfile(&mf1, p->one) < 0 ||
		    fill_mmfile(&mf2, p->two) < 0)
			return error("unable to read files to diff");

			git_SHA1_Update(&ctx, oid_to_hex(&p->one->oid),
					40);
			git_SHA1_Update(&ctx, oid_to_hex(&p->two->oid),
					40);
int diff_flush_patch_id(struct diff_options *options, unsigned char *sha1, int diff_header_only)
	int result = diff_get_patch_id(options, sha1, diff_header_only);
	    (p->one->oid_valid && p->two->oid_valid) ||
	if (driver->textconv_cache && df->oid_valid) {
		*outbuf = notes_cache_get(driver->textconv_cache,
					  df->oid.hash,
	if (driver->textconv_cache && df->oid_valid) {
		notes_cache_put(driver->textconv_cache, df->oid.hash, *outbuf,