/*
 * This header was generated from the Linux kernel headers by update_headers.py,
 * to provide necessary information from kernel to userspace, such as constants,
 * structures, and macros, and thus, contains no copyrightable information.
 */
#ifndef _ASM_GENERIC_HUGETLB_ENCODE_H_
#define _ASM_GENERIC_HUGETLB_ENCODE_H_
#define HUGETLB_FLAG_ENCODE_SHIFT	26
#define HUGETLB_FLAG_ENCODE_MASK	0x3f
#define HUGETLB_FLAG_ENCODE_16KB	(14 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_64KB	(16 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_512KB	(19 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_1MB		(20 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_2MB		(21 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_8MB		(23 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_16MB	(24 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_32MB	(25 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_256MB	(28 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_512MB	(29 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_1GB		(30 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_2GB		(31 << HUGETLB_FLAG_ENCODE_SHIFT)
#define HUGETLB_FLAG_ENCODE_16GB	(34 << HUGETLB_FLAG_ENCODE_SHIFT)
#endif
