/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_BASE_YY_GRAM_H_INCLUDED
# define YY_BASE_YY_GRAM_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int base_yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENT = 258,                   /* IDENT  */
    FCONST = 259,                  /* FCONST  */
    SCONST = 260,                  /* SCONST  */
    BCONST = 261,                  /* BCONST  */
    XCONST = 262,                  /* XCONST  */
    Op = 263,                      /* Op  */
    ICONST = 264,                  /* ICONST  */
    PARAM = 265,                   /* PARAM  */
    TYPECAST = 266,                /* TYPECAST  */
    DOT_DOT = 267,                 /* DOT_DOT  */
    COLON_EQUALS = 268,            /* COLON_EQUALS  */
    ABORT_P = 269,                 /* ABORT_P  */
    ABSOLUTE_P = 270,              /* ABSOLUTE_P  */
    ACCESS = 271,                  /* ACCESS  */
    ACTION = 272,                  /* ACTION  */
    ADD_P = 273,                   /* ADD_P  */
    ADMIN = 274,                   /* ADMIN  */
    AFTER = 275,                   /* AFTER  */
    AGGREGATE = 276,               /* AGGREGATE  */
    ALL = 277,                     /* ALL  */
    ALSO = 278,                    /* ALSO  */
    ALTER = 279,                   /* ALTER  */
    ALWAYS = 280,                  /* ALWAYS  */
    ANALYSE = 281,                 /* ANALYSE  */
    ANALYZE = 282,                 /* ANALYZE  */
    AND = 283,                     /* AND  */
    ANY = 284,                     /* ANY  */
    ARRAY = 285,                   /* ARRAY  */
    AS = 286,                      /* AS  */
    ASC = 287,                     /* ASC  */
    ASSERTION = 288,               /* ASSERTION  */
    ASSIGNMENT = 289,              /* ASSIGNMENT  */
    ASYMMETRIC = 290,              /* ASYMMETRIC  */
    AT = 291,                      /* AT  */
    ATTRIBUTE = 292,               /* ATTRIBUTE  */
    AUTHORIZATION = 293,           /* AUTHORIZATION  */
    BACKWARD = 294,                /* BACKWARD  */
    BEFORE = 295,                  /* BEFORE  */
    BEGIN_P = 296,                 /* BEGIN_P  */
    BETWEEN = 297,                 /* BETWEEN  */
    BIGINT = 298,                  /* BIGINT  */
    BINARY = 299,                  /* BINARY  */
    BIT = 300,                     /* BIT  */
    BOOLEAN_P = 301,               /* BOOLEAN_P  */
    BOTH = 302,                    /* BOTH  */
    BY = 303,                      /* BY  */
    CACHE = 304,                   /* CACHE  */
    CALLED = 305,                  /* CALLED  */
    CASCADE = 306,                 /* CASCADE  */
    CASCADED = 307,                /* CASCADED  */
    CASE = 308,                    /* CASE  */
    CAST = 309,                    /* CAST  */
    CATALOG_P = 310,               /* CATALOG_P  */
    CHAIN = 311,                   /* CHAIN  */
    CHAR_P = 312,                  /* CHAR_P  */
    CHARACTER = 313,               /* CHARACTER  */
    CHARACTERISTICS = 314,         /* CHARACTERISTICS  */
    CHECK = 315,                   /* CHECK  */
    CHECKPOINT = 316,              /* CHECKPOINT  */
    CLASS = 317,                   /* CLASS  */
    CLOSE = 318,                   /* CLOSE  */
    CLUSTER = 319,                 /* CLUSTER  */
    COALESCE = 320,                /* COALESCE  */
    COLLATE = 321,                 /* COLLATE  */
    COLLATION = 322,               /* COLLATION  */
    COLUMN = 323,                  /* COLUMN  */
    COMMENT = 324,                 /* COMMENT  */
    COMMENTS = 325,                /* COMMENTS  */
    COMMIT = 326,                  /* COMMIT  */
    COMMITTED = 327,               /* COMMITTED  */
    CONCURRENCY = 328,             /* CONCURRENCY  */
    CONCURRENTLY = 329,            /* CONCURRENTLY  */
    CONFIGURATION = 330,           /* CONFIGURATION  */
    CONNECTION = 331,              /* CONNECTION  */
    CONSTRAINT = 332,              /* CONSTRAINT  */
    CONSTRAINTS = 333,             /* CONSTRAINTS  */
    CONTENT_P = 334,               /* CONTENT_P  */
    CONTINUE_P = 335,              /* CONTINUE_P  */
    CONVERSION_P = 336,            /* CONVERSION_P  */
    COPY = 337,                    /* COPY  */
    COST = 338,                    /* COST  */
    CREATE = 339,                  /* CREATE  */
    CROSS = 340,                   /* CROSS  */
    CSV = 341,                     /* CSV  */
    CURRENT_P = 342,               /* CURRENT_P  */
    CURRENT_CATALOG = 343,         /* CURRENT_CATALOG  */
    CURRENT_DATE = 344,            /* CURRENT_DATE  */
    CURRENT_ROLE = 345,            /* CURRENT_ROLE  */
    CURRENT_SCHEMA = 346,          /* CURRENT_SCHEMA  */
    CURRENT_TIME = 347,            /* CURRENT_TIME  */
    CURRENT_TIMESTAMP = 348,       /* CURRENT_TIMESTAMP  */
    CURRENT_USER = 349,            /* CURRENT_USER  */
    CURSOR = 350,                  /* CURSOR  */
    CYCLE = 351,                   /* CYCLE  */
    DATA_P = 352,                  /* DATA_P  */
    DATABASE = 353,                /* DATABASE  */
    DAY_P = 354,                   /* DAY_P  */
    DEALLOCATE = 355,              /* DEALLOCATE  */
    DEC = 356,                     /* DEC  */
    DECIMAL_P = 357,               /* DECIMAL_P  */
    DECLARE = 358,                 /* DECLARE  */
    DEFAULT = 359,                 /* DEFAULT  */
    DEFAULTS = 360,                /* DEFAULTS  */
    DEFERRABLE = 361,              /* DEFERRABLE  */
    DEFERRED = 362,                /* DEFERRED  */
    DEFINER = 363,                 /* DEFINER  */
    DELETE_P = 364,                /* DELETE_P  */
    DELIMITER = 365,               /* DELIMITER  */
    DELIMITERS = 366,              /* DELIMITERS  */
    DESC = 367,                    /* DESC  */
    DICTIONARY = 368,              /* DICTIONARY  */
    DISABLE_P = 369,               /* DISABLE_P  */
    DISCARD = 370,                 /* DISCARD  */
    DISTINCT = 371,                /* DISTINCT  */
    DO = 372,                      /* DO  */
    DOCUMENT_P = 373,              /* DOCUMENT_P  */
    DOMAIN_P = 374,                /* DOMAIN_P  */
    DOUBLE_P = 375,                /* DOUBLE_P  */
    DROP = 376,                    /* DROP  */
    EACH = 377,                    /* EACH  */
    ELSE = 378,                    /* ELSE  */
    ENABLE_P = 379,                /* ENABLE_P  */
    ENCODING = 380,                /* ENCODING  */
    ENCRYPTED = 381,               /* ENCRYPTED  */
    END_P = 382,                   /* END_P  */
    ENDPOINT = 383,                /* ENDPOINT  */
    ENUM_P = 384,                  /* ENUM_P  */
    ESCAPE = 385,                  /* ESCAPE  */
    EVENT = 386,                   /* EVENT  */
    EXCEPT = 387,                  /* EXCEPT  */
    EXCLUDE = 388,                 /* EXCLUDE  */
    EXCLUDING = 389,               /* EXCLUDING  */
    EXCLUSIVE = 390,               /* EXCLUSIVE  */
    EXECUTE = 391,                 /* EXECUTE  */
    EXISTS = 392,                  /* EXISTS  */
    EXPLAIN = 393,                 /* EXPLAIN  */
    EXTENSION = 394,               /* EXTENSION  */
    EXTERNAL = 395,                /* EXTERNAL  */
    EXTRACT = 396,                 /* EXTRACT  */
    FALSE_P = 397,                 /* FALSE_P  */
    FAMILY = 398,                  /* FAMILY  */
    FAST = 399,                    /* FAST  */
    FETCH = 400,                   /* FETCH  */
    FILTER = 401,                  /* FILTER  */
    FIRST_P = 402,                 /* FIRST_P  */
    FLOAT_P = 403,                 /* FLOAT_P  */
    FOLLOWING = 404,               /* FOLLOWING  */
    FOR = 405,                     /* FOR  */
    FORCE = 406,                   /* FORCE  */
    FOREIGN = 407,                 /* FOREIGN  */
    FORWARD = 408,                 /* FORWARD  */
    FREEZE = 409,                  /* FREEZE  */
    FROM = 410,                    /* FROM  */
    FULL = 411,                    /* FULL  */
    FUNCTION = 412,                /* FUNCTION  */
    FUNCTIONS = 413,               /* FUNCTIONS  */
    GLOBAL = 414,                  /* GLOBAL  */
    GRANT = 415,                   /* GRANT  */
    GRANTED = 416,                 /* GRANTED  */
    GREATEST = 417,                /* GREATEST  */
    GROUP_P = 418,                 /* GROUP_P  */
    HANDLER = 419,                 /* HANDLER  */
    HAVING = 420,                  /* HAVING  */
    HEADER_P = 421,                /* HEADER_P  */
    HOLD = 422,                    /* HOLD  */
    HOUR_P = 423,                  /* HOUR_P  */
    IDENTITY_P = 424,              /* IDENTITY_P  */
    IF_P = 425,                    /* IF_P  */
    ILIKE = 426,                   /* ILIKE  */
    IMMEDIATE = 427,               /* IMMEDIATE  */
    IMMUTABLE = 428,               /* IMMUTABLE  */
    IMPLICIT_P = 429,              /* IMPLICIT_P  */
    IN_P = 430,                    /* IN_P  */
    INCLUDING = 431,               /* INCLUDING  */
    INCREMENT = 432,               /* INCREMENT  */
    INDEX = 433,                   /* INDEX  */
    INDEXES = 434,                 /* INDEXES  */
    INHERIT = 435,                 /* INHERIT  */
    INHERITS = 436,                /* INHERITS  */
    INITIALLY = 437,               /* INITIALLY  */
    INLINE_P = 438,                /* INLINE_P  */
    INNER_P = 439,                 /* INNER_P  */
    INOUT = 440,                   /* INOUT  */
    INPUT_P = 441,                 /* INPUT_P  */
    INSENSITIVE = 442,             /* INSENSITIVE  */
    INSERT = 443,                  /* INSERT  */
    INSTEAD = 444,                 /* INSTEAD  */
    INT_P = 445,                   /* INT_P  */
    INTEGER = 446,                 /* INTEGER  */
    INTERSECT = 447,               /* INTERSECT  */
    INTERVAL = 448,                /* INTERVAL  */
    INTO = 449,                    /* INTO  */
    INVOKER = 450,                 /* INVOKER  */
    IS = 451,                      /* IS  */
    ISNULL = 452,                  /* ISNULL  */
    ISOLATION = 453,               /* ISOLATION  */
    JOIN = 454,                    /* JOIN  */
    KEY = 455,                     /* KEY  */
    LABEL = 456,                   /* LABEL  */
    LANGUAGE = 457,                /* LANGUAGE  */
    LARGE_P = 458,                 /* LARGE_P  */
    LAST_P = 459,                  /* LAST_P  */
    LATERAL_P = 460,               /* LATERAL_P  */
    LC_COLLATE_P = 461,            /* LC_COLLATE_P  */
    LC_CTYPE_P = 462,              /* LC_CTYPE_P  */
    LEADING = 463,                 /* LEADING  */
    LEAKPROOF = 464,               /* LEAKPROOF  */
    LEAST = 465,                   /* LEAST  */
    LEFT = 466,                    /* LEFT  */
    LEVEL = 467,                   /* LEVEL  */
    LIKE = 468,                    /* LIKE  */
    LIMIT = 469,                   /* LIMIT  */
    LISTEN = 470,                  /* LISTEN  */
    LOAD = 471,                    /* LOAD  */
    LOCAL = 472,                   /* LOCAL  */
    LOCALTIME = 473,               /* LOCALTIME  */
    LOCALTIMESTAMP = 474,          /* LOCALTIMESTAMP  */
    LOCATION = 475,                /* LOCATION  */
    LOCK_P = 476,                  /* LOCK_P  */
    MAPPING = 477,                 /* MAPPING  */
    MATCH = 478,                   /* MATCH  */
    MATERIALIZED = 479,            /* MATERIALIZED  */
    MAXVALUE = 480,                /* MAXVALUE  */
    MEMORY_LIMIT = 481,            /* MEMORY_LIMIT  */
    MEMORY_SHARED_QUOTA = 482,     /* MEMORY_SHARED_QUOTA  */
    MEMORY_SPILL_RATIO = 483,      /* MEMORY_SPILL_RATIO  */
    MINUTE_P = 484,                /* MINUTE_P  */
    MINVALUE = 485,                /* MINVALUE  */
    MODE = 486,                    /* MODE  */
    MONTH_P = 487,                 /* MONTH_P  */
    MOVE = 488,                    /* MOVE  */
    NAME_P = 489,                  /* NAME_P  */
    NAMES = 490,                   /* NAMES  */
    NATIONAL = 491,                /* NATIONAL  */
    NATURAL = 492,                 /* NATURAL  */
    NCHAR = 493,                   /* NCHAR  */
    NEXT = 494,                    /* NEXT  */
    NO = 495,                      /* NO  */
    NONE = 496,                    /* NONE  */
    NOT = 497,                     /* NOT  */
    NOTHING = 498,                 /* NOTHING  */
    NOTIFY = 499,                  /* NOTIFY  */
    NOTNULL = 500,                 /* NOTNULL  */
    NOWAIT = 501,                  /* NOWAIT  */
    NULL_P = 502,                  /* NULL_P  */
    NULLIF = 503,                  /* NULLIF  */
    NULLS_P = 504,                 /* NULLS_P  */
    NUMERIC = 505,                 /* NUMERIC  */
    OBJECT_P = 506,                /* OBJECT_P  */
    OF = 507,                      /* OF  */
    OFF = 508,                     /* OFF  */
    OFFSET = 509,                  /* OFFSET  */
    OIDS = 510,                    /* OIDS  */
    ON = 511,                      /* ON  */
    ONLY = 512,                    /* ONLY  */
    OPERATOR = 513,                /* OPERATOR  */
    OPTION = 514,                  /* OPTION  */
    OPTIONS = 515,                 /* OPTIONS  */
    OR = 516,                      /* OR  */
    ORDER = 517,                   /* ORDER  */
    ORDINALITY = 518,              /* ORDINALITY  */
    OUT_P = 519,                   /* OUT_P  */
    OUTER_P = 520,                 /* OUTER_P  */
    OVER = 521,                    /* OVER  */
    OVERLAPS = 522,                /* OVERLAPS  */
    OVERLAY = 523,                 /* OVERLAY  */
    OWNED = 524,                   /* OWNED  */
    OWNER = 525,                   /* OWNER  */
    PARSER = 526,                  /* PARSER  */
    PARTIAL = 527,                 /* PARTIAL  */
    PARTITION = 528,               /* PARTITION  */
    PASSING = 529,                 /* PASSING  */
    PASSWORD = 530,                /* PASSWORD  */
    PLACING = 531,                 /* PLACING  */
    PLANS = 532,                   /* PLANS  */
    POSITION = 533,                /* POSITION  */
    PRECEDING = 534,               /* PRECEDING  */
    PRECISION = 535,               /* PRECISION  */
    PRESERVE = 536,                /* PRESERVE  */
    PREPARE = 537,                 /* PREPARE  */
    PREPARED = 538,                /* PREPARED  */
    PRIMARY = 539,                 /* PRIMARY  */
    PRIOR = 540,                   /* PRIOR  */
    PRIVILEGES = 541,              /* PRIVILEGES  */
    PROCEDURAL = 542,              /* PROCEDURAL  */
    PROCEDURE = 543,               /* PROCEDURE  */
    PROGRAM = 544,                 /* PROGRAM  */
    QUOTE = 545,                   /* QUOTE  */
    RANGE = 546,                   /* RANGE  */
    READ = 547,                    /* READ  */
    REAL = 548,                    /* REAL  */
    REASSIGN = 549,                /* REASSIGN  */
    RECHECK = 550,                 /* RECHECK  */
    RECURSIVE = 551,               /* RECURSIVE  */
    REF = 552,                     /* REF  */
    REFERENCES = 553,              /* REFERENCES  */
    REFRESH = 554,                 /* REFRESH  */
    REINDEX = 555,                 /* REINDEX  */
    RELATIVE_P = 556,              /* RELATIVE_P  */
    RELEASE = 557,                 /* RELEASE  */
    RENAME = 558,                  /* RENAME  */
    REPEATABLE = 559,              /* REPEATABLE  */
    REPLACE = 560,                 /* REPLACE  */
    REPLICA = 561,                 /* REPLICA  */
    RESET = 562,                   /* RESET  */
    RESTART = 563,                 /* RESTART  */
    RESTRICT = 564,                /* RESTRICT  */
    RETURNING = 565,               /* RETURNING  */
    RETURNS = 566,                 /* RETURNS  */
    REVOKE = 567,                  /* REVOKE  */
    RIGHT = 568,                   /* RIGHT  */
    ROLE = 569,                    /* ROLE  */
    ROLLBACK = 570,                /* ROLLBACK  */
    ROW = 571,                     /* ROW  */
    ROWS = 572,                    /* ROWS  */
    RULE = 573,                    /* RULE  */
    SAVEPOINT = 574,               /* SAVEPOINT  */
    SCHEMA = 575,                  /* SCHEMA  */
    SCROLL = 576,                  /* SCROLL  */
    SEARCH = 577,                  /* SEARCH  */
    SECOND_P = 578,                /* SECOND_P  */
    SECURITY = 579,                /* SECURITY  */
    SELECT = 580,                  /* SELECT  */
    SEQUENCE = 581,                /* SEQUENCE  */
    SEQUENCES = 582,               /* SEQUENCES  */
    SERIALIZABLE = 583,            /* SERIALIZABLE  */
    SERVER = 584,                  /* SERVER  */
    SESSION = 585,                 /* SESSION  */
    SESSION_USER = 586,            /* SESSION_USER  */
    SET = 587,                     /* SET  */
    SETOF = 588,                   /* SETOF  */
    SHARE = 589,                   /* SHARE  */
    SHOW = 590,                    /* SHOW  */
    SIMILAR = 591,                 /* SIMILAR  */
    SIMPLE = 592,                  /* SIMPLE  */
    SMALLINT = 593,                /* SMALLINT  */
    SNAPSHOT = 594,                /* SNAPSHOT  */
    SOME = 595,                    /* SOME  */
    STABLE = 596,                  /* STABLE  */
    STANDALONE_P = 597,            /* STANDALONE_P  */
    START = 598,                   /* START  */
    STATEMENT = 599,               /* STATEMENT  */
    STATISTICS = 600,              /* STATISTICS  */
    STDIN = 601,                   /* STDIN  */
    STDOUT = 602,                  /* STDOUT  */
    STORAGE = 603,                 /* STORAGE  */
    STRICT_P = 604,                /* STRICT_P  */
    STRIP_P = 605,                 /* STRIP_P  */
    SUBSTRING = 606,               /* SUBSTRING  */
    SYMMETRIC = 607,               /* SYMMETRIC  */
    SYSID = 608,                   /* SYSID  */
    SYSTEM_P = 609,                /* SYSTEM_P  */
    TABLE = 610,                   /* TABLE  */
    TABLES = 611,                  /* TABLES  */
    TABLESPACE = 612,              /* TABLESPACE  */
    TEMP = 613,                    /* TEMP  */
    TEMPLATE = 614,                /* TEMPLATE  */
    TEMPORARY = 615,               /* TEMPORARY  */
    TEXT_P = 616,                  /* TEXT_P  */
    THEN = 617,                    /* THEN  */
    TIME = 618,                    /* TIME  */
    TIMESTAMP = 619,               /* TIMESTAMP  */
    TO = 620,                      /* TO  */
    TRAILING = 621,                /* TRAILING  */
    TRANSACTION = 622,             /* TRANSACTION  */
    TREAT = 623,                   /* TREAT  */
    TRIGGER = 624,                 /* TRIGGER  */
    TRIM = 625,                    /* TRIM  */
    TRUE_P = 626,                  /* TRUE_P  */
    TRUNCATE = 627,                /* TRUNCATE  */
    TRUSTED = 628,                 /* TRUSTED  */
    TYPE_P = 629,                  /* TYPE_P  */
    TYPES_P = 630,                 /* TYPES_P  */
    UNBOUNDED = 631,               /* UNBOUNDED  */
    UNCOMMITTED = 632,             /* UNCOMMITTED  */
    UNENCRYPTED = 633,             /* UNENCRYPTED  */
    UNION = 634,                   /* UNION  */
    UNIQUE = 635,                  /* UNIQUE  */
    UNKNOWN = 636,                 /* UNKNOWN  */
    UNLISTEN = 637,                /* UNLISTEN  */
    UNLOGGED = 638,                /* UNLOGGED  */
    UNTIL = 639,                   /* UNTIL  */
    UPDATE = 640,                  /* UPDATE  */
    USER = 641,                    /* USER  */
    USING = 642,                   /* USING  */
    VACUUM = 643,                  /* VACUUM  */
    VALID = 644,                   /* VALID  */
    VALIDATE = 645,                /* VALIDATE  */
    VALIDATOR = 646,               /* VALIDATOR  */
    VALUE_P = 647,                 /* VALUE_P  */
    VALUES = 648,                  /* VALUES  */
    VARCHAR = 649,                 /* VARCHAR  */
    VARIADIC = 650,                /* VARIADIC  */
    VARYING = 651,                 /* VARYING  */
    VERBOSE = 652,                 /* VERBOSE  */
    VERSION_P = 653,               /* VERSION_P  */
    VIEW = 654,                    /* VIEW  */
    VIEWS = 655,                   /* VIEWS  */
    VOLATILE = 656,                /* VOLATILE  */
    WHEN = 657,                    /* WHEN  */
    WHERE = 658,                   /* WHERE  */
    WHITESPACE_P = 659,            /* WHITESPACE_P  */
    WINDOW = 660,                  /* WINDOW  */
    WITH = 661,                    /* WITH  */
    WITHIN = 662,                  /* WITHIN  */
    WITHOUT = 663,                 /* WITHOUT  */
    WORK = 664,                    /* WORK  */
    WRAPPER = 665,                 /* WRAPPER  */
    WRITE = 666,                   /* WRITE  */
    XML_P = 667,                   /* XML_P  */
    XMLATTRIBUTES = 668,           /* XMLATTRIBUTES  */
    XMLCONCAT = 669,               /* XMLCONCAT  */
    XMLELEMENT = 670,              /* XMLELEMENT  */
    XMLEXISTS = 671,               /* XMLEXISTS  */
    XMLFOREST = 672,               /* XMLFOREST  */
    XMLPARSE = 673,                /* XMLPARSE  */
    XMLPI = 674,                   /* XMLPI  */
    XMLROOT = 675,                 /* XMLROOT  */
    XMLSERIALIZE = 676,            /* XMLSERIALIZE  */
    YEAR_P = 677,                  /* YEAR_P  */
    YES_P = 678,                   /* YES_P  */
    ZONE = 679,                    /* ZONE  */
    ACTIVE = 680,                  /* ACTIVE  */
    CONTAINS = 681,                /* CONTAINS  */
    CPUSET = 682,                  /* CPUSET  */
    CPU_RATE_LIMIT = 683,          /* CPU_RATE_LIMIT  */
    CREATEEXTTABLE = 684,          /* CREATEEXTTABLE  */
    CUBE = 685,                    /* CUBE  */
    DECODE = 686,                  /* DECODE  */
    DENY = 687,                    /* DENY  */
    DISTRIBUTED = 688,             /* DISTRIBUTED  */
    DXL = 689,                     /* DXL  */
    ERRORS = 690,                  /* ERRORS  */
    EVERY = 691,                   /* EVERY  */
    EXCHANGE = 692,                /* EXCHANGE  */
    EXPAND = 693,                  /* EXPAND  */
    FIELDS = 694,                  /* FIELDS  */
    FILL = 695,                    /* FILL  */
    FORMAT = 696,                  /* FORMAT  */
    FULLSCAN = 697,                /* FULLSCAN  */
    GROUP_ID = 698,                /* GROUP_ID  */
    GROUPING = 699,                /* GROUPING  */
    HASH = 700,                    /* HASH  */
    HOST = 701,                    /* HOST  */
    IGNORE_P = 702,                /* IGNORE_P  */
    INCLUSIVE = 703,               /* INCLUSIVE  */
    INITPLAN = 704,                /* INITPLAN  */
    LIST = 705,                    /* LIST  */
    LOG_P = 706,                   /* LOG_P  */
    MASTER = 707,                  /* MASTER  */
    MEDIAN = 708,                  /* MEDIAN  */
    MISSING = 709,                 /* MISSING  */
    MODIFIES = 710,                /* MODIFIES  */
    NEWLINE = 711,                 /* NEWLINE  */
    NOCREATEEXTTABLE = 712,        /* NOCREATEEXTTABLE  */
    NOOVERCOMMIT = 713,            /* NOOVERCOMMIT  */
    ORDERED = 714,                 /* ORDERED  */
    OTHERS = 715,                  /* OTHERS  */
    OVERCOMMIT = 716,              /* OVERCOMMIT  */
    PARALLEL = 717,                /* PARALLEL  */
    RETRIEVE = 718,                /* RETRIEVE  */
    PARTITIONS = 719,              /* PARTITIONS  */
    PERCENT = 720,                 /* PERCENT  */
    PERSISTENTLY = 721,            /* PERSISTENTLY  */
    PROTOCOL = 722,                /* PROTOCOL  */
    QUEUE = 723,                   /* QUEUE  */
    RANDOMLY = 724,                /* RANDOMLY  */
    READABLE = 725,                /* READABLE  */
    READS = 726,                   /* READS  */
    REJECT_P = 727,                /* REJECT_P  */
    REPLICATED = 728,              /* REPLICATED  */
    RESOURCE = 729,                /* RESOURCE  */
    ROLLUP = 730,                  /* ROLLUP  */
    ROOTPARTITION = 731,           /* ROOTPARTITION  */
    SCATTER = 732,                 /* SCATTER  */
    SEGMENT = 733,                 /* SEGMENT  */
    SEGMENTS = 734,                /* SEGMENTS  */
    SETS = 735,                    /* SETS  */
    SHRINK = 736,                  /* SHRINK  */
    SPLIT = 737,                   /* SPLIT  */
    SQL = 738,                     /* SQL  */
    SUBPARTITION = 739,            /* SUBPARTITION  */
    THRESHOLD = 740,               /* THRESHOLD  */
    TIES = 741,                    /* TIES  */
    VALIDATION = 742,              /* VALIDATION  */
    WEB = 743,                     /* WEB  */
    WRITABLE = 744,                /* WRITABLE  */
    YEZZEY = 745,                  /* YEZZEY  */
    SKIP_LOCKED = 746,             /* SKIP_LOCKED  */
    NULLS_FIRST = 747,             /* NULLS_FIRST  */
    NULLS_LAST = 748,              /* NULLS_LAST  */
    WITH_ORDINALITY = 749,         /* WITH_ORDINALITY  */
    WITH_TIME = 750,               /* WITH_TIME  */
    POSTFIXOP = 751,               /* POSTFIXOP  */
    UMINUS = 752                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 189 "gram.y"

	core_YYSTYPE		core_yystype;
	/* these fields must match core_YYSTYPE: */
	int					ival;
	char				*str;
	const char			*keyword;

	char				chr;
	bool				boolean;
	JoinType			jtype;
	DropBehavior		dbehavior;
	OnCommitAction		oncommit;
	List				*list;
	Node				*node;
	Value				*value;
	ObjectType			objtype;
	TypeName			*typnam;
	FunctionParameter   *fun_param;
	FunctionParameterMode fun_param_mode;
	FuncWithArgs		*funwithargs;
	DefElem				*defelt;
	SortBy				*sortby;
	WindowDef			*windef;
	JoinExpr			*jexpr;
	IndexElem			*ielem;
	Alias				*alias;
	RangeVar			*range;
	IntoClause			*into;
	WithClause			*with;
	A_Indices			*aind;
	ResTarget			*target;
	struct PrivTarget	*privtarget;
	AccessPriv			*accesspriv;
	InsertStmt			*istmt;
	VariableSetStmt		*vsetstmt;

#line 598 "gram.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif




int base_yyparse (core_yyscan_t yyscanner);


#endif /* !YY_BASE_YY_GRAM_H_INCLUDED  */
