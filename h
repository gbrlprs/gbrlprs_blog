[1mdiff --git a/config/_default/params.toml b/config/_default/params.toml[m
[1mindex 7ab68c4..1da6ed2 100644[m
[1m--- a/config/_default/params.toml[m
[1m+++ b/config/_default/params.toml[m
[36m@@ -67,14 +67,14 @@[m [mforgejoDefaultServer = "https://v11.next.forgejo.org"[m
   disableHeroImageFilter = false # only used when layout equals hero[m
 [m
 [article][m
[31m-  showDate = true #for some reason it wasn't showing on website but it was showing locally[m
[31m-  showViews = true #same as above[m
[32m+[m[32m  showDate = true[m
[32m+[m[32m  showViews = true[m
   showLikes = false[m
   showDateOnlyInArticle = false[m
   showDateUpdated = false[m
   showAuthor = true[m
   # showAuthorBottom = false[m
[31m-  showHero = true[m
[32m+[m[32m  showHero = false[m
    heroStyle = "big" # valid options: basic, big, background, thumbAndBackground[m
   layoutBackgroundBlur = true # only used when heroStyle equals background or thumbAndBackground[m
   layoutBackgroundHeaderSpace = true # only used when heroStyle equals background[m
[36m@@ -87,7 +87,7 @@[m [mforgejoDefaultServer = "https://v11.next.forgejo.org"[m
   showHeadingAnchors = true[m
   showPagination = true[m
   invertPagination = false[m
[31m-  showReadingTime = true #same problem as showDate and showViews[m
[32m+[m[32m  showReadingTime = true[m
   showTableOfContents = true[m
   # showRelatedContent = true[m
   # relatedContentLimit = 3[m
[36m@@ -96,7 +96,7 @@[m [mforgejoDefaultServer = "https://v11.next.forgejo.org"[m
   showTags = true # These will show if showTaxonomies is true.[m
   showCategoriesInSecondaryColor = false # This will change the color of category badges, so the user can better distinguish between the two. Only if showTaxonomies is true.[m
   showAuthorsBadges = false[m
[31m-  showWordCount = true #same problem as showDate and showViews[m
[32m+[m[32m  showWordCount = true[m
   sharingLinks = [ "linkedin", "twitter", "bluesky", "mastodon", "reddit", "facebook", "email", "whatsapp", "telegram"][m
   showZenMode = false[m
   # externalLinkForceNewTab = false # disable to allow external links in the same tab (defaults to true)[m
