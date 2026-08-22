Git is a  distributed control system too allow multiple developers to work on the same project simultaneously without overwriting each other's work.
GitHub is a online thing that allow people to see what you wrote and commit on what you wrote T
| Git | GitHub |
| :--- | :--- |
| Installed locally | Hosted in the cloud |
| First released in 2005 | Company launched in 2008 |
| Maintained by The Linux Foundation | Purchased in 2018 by Microsoft |
| Focused on version control and code sharing | Focused on centralized source code hosting |
| Primarily a command-line tool | Administered through the web |
| Provides a desktop interface named Git Gui | Desktop interface named GitHub Desktop |
| No user management features | Built-in user management |
| Minimal exteral tool configuration features | Active marketplace for tool integration |
| Competes with Mercurial, Subversion, IBM, Rational Team Concert and ClearCase | Competes with Atlassian Bitbucket and GitLab |
| Open source licensed | Includes a free tier and pay-for-use tiers |

 In the upper-right corner of any page, select the + menu and click New repository.
Choose the Owner account.
Type a repository name.
Optionally add a description.
Choose Public or Private.
Optionally select:
Add a README
.gitignore
a license
a template repository
Click Create repository

A README is often the first item a visitor will see when visiting your repository. README files typically include information on:

What the project does
Why the project is useful
How users can get started with the project
Where users can get help with your project
Who maintains and contributes to the project

Most programming languages have well-established conventions as to what constitutesgit push style, i.e. naming, formatting and so on. There are variations on these conventions, of course, but most developers agree that picking one and sticking to it is far better than the chaos that ensues when everybody does their own thing.
Style. Markup syntax, wrap margins, grammar, capitalization, punctuation. Spell these things out, remove the guesswork, and make it all as simple as possible. The end result will be a remarkably consistent log that’s not only a pleasure to read but that actually does get read on a regular basis.

Content. What kind of information should the body of the commit message (if any) contain? What should it not contain?

Metadata. How should issue tracking IDs, pull request numbers, etc. be referenced?
Separate subject from body with a blank line
Limit the subject line to 50 characters
Capitalize the subject line
Do not end the subject line with a period
Use the imperative mood in the subject line
Wrap the body at 72 characters
Use the body to explain what and why vs. how


cd <repo directory>
git add <file name>
