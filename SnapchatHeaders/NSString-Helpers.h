//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (Helpers)
+ (_Bool)captionContentValidation:(id)arg1;
+ (id)numberFromString:(id)arg1;
+ (id)truncatedString:(id)arg1 width:(double)arg2 ellipsis:(id)arg3;
+ (id)UUIDV3StringFromSeed:(id)arg1;
+ (id)stringWithBool:(_Bool)arg1;
+ (id)processForDisplay:(id)arg1;
+ (id)attibutesFromFont:(id)arg1 lineBreakMode:(long long)arg2 alignment:(long long)arg3;
+ (id)attibutesFromFont:(id)arg1 lineBreakMode:(long long)arg2;
+ (id)sizeCache;
+ (id)hexToData:(id)arg1;
+ (id)generateRandomStringOfLength:(long long)arg1;
+ (struct CGSize)text:(id)arg1 sizeWithFont:(id)arg2 constrainedToSize:(struct CGSize)arg3;
+ (_Bool)resizeFontOfTextView:(id)arg1 toFitText:(id)arg2 constrainedSize:(struct CGSize)arg3 minFontSize:(long long)arg4 maxFontSize:(long long)arg5;
+ (long long)maxFontSizeInWidthForText:(id)arg1 fontName:(id)arg2 withMinFontSize:(long long)arg3 withMaxFontSize:(long long)arg4 maxWidth:(double)arg5;
+ (double)widthSingleLineText:(id)arg1 forFont:(id)arg2;
+ (id)scrambleWord:(id)arg1;
+ (id)scramble:(id)arg1;
+ (id)hexadecimalString:(id)arg1;
+ (id)sha2:(id)arg1;
+ (id)getEmailDomain:(id)arg1;
+ (id)stringByRemovingEmojis:(id)arg1;
+ (id)stringByRemovingPrefixEmojis:(id)arg1;
+ (_Bool)isEmojiCharacter:(id)arg1;
+ (long long)typeForCodePoint:(unsigned long long)arg1;
+ (_Bool)isEmojiJoiner:(unsigned long long)arg1;
+ (_Bool)isEmojiVariationSelector:(unsigned long long)arg1;
+ (_Bool)isEmojiCodePoint:(unsigned long long)arg1;
+ (id)codePointForText:(id)arg1 atIndex:(unsigned long long)arg2 length:(long long *)arg3;
+ (id)codePointForText:(id)arg1 atIndex:(unsigned long long)arg2;
+ (_Bool)isValidEmail:(id)arg1;
+ (id)hashData:(id)arg1;
+ (id)hashString:(id)arg1;
+ (id)longDateFromDate:(id)arg1;
+ (id)mediumDateFromDate:(id)arg1;
+ (id)shortDateFromDate:(id)arg1;
+ (id)timeFromDate:(id)arg1;
+ (id)formatRelativeDate:(id)arg1 localizedTodayString:(id)arg2;
+ (id)formatRelativeDate:(id)arg1 localizedTodayString:(id)arg2 offsetByHours:(long long)arg3;
+ (id)formatTimeInterval:(double)arg1 showAbbrNow:(_Bool)arg2 capitalize:(_Bool)arg3 justNowThreshold:(double)arg4 roundingToClosest:(_Bool)arg5;
+ (id)formatDate:(id)arg1 showAgo:(_Bool)arg2 maxHours:(unsigned long long)arg3 showAbbrNow:(_Bool)arg4 capitalize:(_Bool)arg5 justNowThreshold:(double)arg6 useYesterdayText:(_Bool)arg7 useSimplified:(_Bool)arg8;
+ (id)formatDate:(id)arg1 showAgo:(_Bool)arg2 maxHours:(unsigned long long)arg3 showAbbrNow:(_Bool)arg4 capitalize:(_Bool)arg5 justNowThreshold:(double)arg6;
+ (id)formatDate:(id)arg1 showAgo:(_Bool)arg2 maxHours:(unsigned long long)arg3 showAbbrNow:(_Bool)arg4 capitalize:(_Bool)arg5;
+ (id)formatDate:(id)arg1 showAgo:(_Bool)arg2 maxHours:(unsigned long long)arg3 showAbbrNow:(_Bool)arg4;
+ (id)formatDate:(id)arg1 showAgo:(_Bool)arg2 maxHours:(unsigned long long)arg3;
+ (id)formatDate:(id)arg1 showAgo:(_Bool)arg2 capitalize:(_Bool)arg3;
+ (id)formatDate:(id)arg1 showAgo:(_Bool)arg2;
+ (id)formatDate:(id)arg1 referenceDate:(id)arg2 maxHours:(unsigned long long)arg3 capitalize:(_Bool)arg4;
+ (id)formatDate:(id)arg1 referenceDate:(id)arg2;
+ (id)formatNumber:(id)arg1;
+ (id)formatPhoneNumberForCalling:(id)arg1;
+ (id)urlDecodeString:(id)arg1;
+ (id)urlEncodeString:(id)arg1;
+ (id)cleanPunctuationLowercase:(id)arg1;
+ (_Bool)containsAlphabetCharactersOnly:(id)arg1;
+ (_Bool)isNotBlank:(id)arg1;
+ (_Bool)isBlank:(id)arg1;
+ (_Bool)isNilOrEmpty:(id)arg1;
+ (id)emptyToNil:(id)arg1;
+ (id)nilToEmpty:(id)arg1;
+ (id)punctuationCharacters;
- (_Bool)isValidUrlFormat;
- (id)stringByTruncatingSubstring:(id)arg1 toWidth:(double)arg2 withFont:(id)arg3 ellipsis:(id)arg4;
- (id)sc_lowercaseString;
- (id)stringByTrimmingLeadingWhitespace;
- (id)stringByTrimmingLeadingAndTrailingWhitespaces;
- (unsigned long long)numberOfSubstringOccurrences:(id)arg1;
- (_Bool)sc_hasPrefix:(id)arg1 options:(unsigned long long)arg2;
- (id)substringToIndexByCharacterSequence:(unsigned long long)arg1;
- (long long)lengthOfCharacterSequences;
- (id)evenlySplitToTwoLines;
- (struct CGSize)sizeWithAttributes:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)sizeWithFont:(id)arg1;
- (_Bool)sc_onlyContainsOccurrencesOfCharacter:(id)arg1;
- (id)sc_commonSuffixWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)sc_reversedString;
- (id)alphanumericCharsOnly;
- (unsigned long long)levenshtinDistanceWithString:(id)arg1;
- (id)unKvoEscaped;
- (id)kvoEscaped;
- (_Bool)doesMatchRegStringExp:(id)arg1;
- (_Bool)matches:(id)arg1;
@end

