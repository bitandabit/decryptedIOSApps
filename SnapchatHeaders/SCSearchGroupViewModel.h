//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCSearchGroupViewModel-Protocol.h"

@class NSArray, NSString, SCSearchActionModel;

@interface SCSearchGroupViewModel : NSObject <SCSearchGroupViewModel>
{
    _Bool _shouldShowSeparatorLine;
    NSString *_titleText;
    NSString *_subtitleText;
    NSString *_groupId;
    NSArray *_friends;
    SCSearchActionModel *_tapActionModel;
    SCSearchActionModel *_longPressActionModel;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) _Bool shouldShowSeparatorLine; // @synthesize shouldShowSeparatorLine=_shouldShowSeparatorLine;
@property(readonly, copy, nonatomic) SCSearchActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCSearchActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 groupId:(id)arg3 friends:(id)arg4 tapActionModel:(id)arg5 longPressActionModel:(id)arg6 shouldShowSeparatorLine:(_Bool)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

