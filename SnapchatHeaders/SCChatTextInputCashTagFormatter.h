//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSRegularExpression;

@interface SCChatTextInputCashTagFormatter : NSObject
{
    NSRegularExpression *_cashStringRegex;
    NSRegularExpression *_cashExpressionDivisionRegex;
    NSRegularExpression *_normalizedCashStringRegex;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
}

@property(retain, nonatomic) NSCharacterSet *whitespaceAndNewlineCharacterSet; // @synthesize whitespaceAndNewlineCharacterSet=_whitespaceAndNewlineCharacterSet;
@property(retain, nonatomic) NSRegularExpression *normalizedCashStringRegex; // @synthesize normalizedCashStringRegex=_normalizedCashStringRegex;
@property(retain, nonatomic) NSRegularExpression *cashExpressionDivisionRegex; // @synthesize cashExpressionDivisionRegex=_cashExpressionDivisionRegex;
@property(retain, nonatomic) NSRegularExpression *cashStringRegex; // @synthesize cashStringRegex=_cashStringRegex;
- (void).cxx_destruct;
- (id)evaluateCashExpression:(id)arg1;
- (_Bool)isWhitespaceOrNewlineCharacterAtIndex:(unsigned long long)arg1 inString:(id)arg2;
- (id)replaceConstantStringInCashTag:(id)arg1;
- (_Bool)nonCashTagStringsInText:(id)arg1;
- (unsigned long long)cashAmountFromNormalizedCashStringRange:(struct _NSRange)arg1 inText:(id)arg2;
- (id)extendedStringFromCashStringRange:(struct _NSRange)arg1 inText:(id)arg2;
- (id)normalizedCashStringFromCashString:(id)arg1;
- (_Bool)isCashStringRange:(struct _NSRange)arg1 validCashTagRangeInText:(id)arg2;
- (id)validCashTagRangesInText:(id)arg1;
- (id)init;

@end
