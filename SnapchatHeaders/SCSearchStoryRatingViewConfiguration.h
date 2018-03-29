//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchStoryRatingViewConfiguration-Protocol.h"

@class NSArray, NSString, UIImage;

@interface SCSearchStoryRatingViewConfiguration : NSObject <SCSearchStoryRatingViewConfiguration>
{
    NSString *_title;
    NSString *_queryText;
    NSArray *_questionsConfiguration;
    NSArray *_ratingLoggingKeys;
    NSArray *_flagTexts;
    NSArray *_flagLoggingKeys;
    long long _style;
    UIImage *_screenshot;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) UIImage *screenshot; // @synthesize screenshot=_screenshot;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) NSArray *flagLoggingKeys; // @synthesize flagLoggingKeys=_flagLoggingKeys;
@property(readonly, copy, nonatomic) NSArray *flagTexts; // @synthesize flagTexts=_flagTexts;
@property(readonly, copy, nonatomic) NSArray *ratingLoggingKeys; // @synthesize ratingLoggingKeys=_ratingLoggingKeys;
@property(readonly, copy, nonatomic) NSArray *questionsConfiguration; // @synthesize questionsConfiguration=_questionsConfiguration;
@property(readonly, copy, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 queryText:(id)arg2 questionsConfiguration:(id)arg3 ratingLoggingKeys:(id)arg4 flagTexts:(id)arg5 flagLoggingKeys:(id)arg6 style:(long long)arg7 screenshot:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

