#define STR(x)    # x

<:  STR(<:)
[   STR([)
:>  STR(:>)
]   STR(])
<%  STR(<%)
{   STR({)
%>  STR(%>)
}   STR(})

no_directive %:  STR(%:)
no_directive # STR(#)
%:%:  STR(%:%:)
##  ##

%: define concat(first,second) first %:%: second
concat(he, llo)
