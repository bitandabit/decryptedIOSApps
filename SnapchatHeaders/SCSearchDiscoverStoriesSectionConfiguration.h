//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCSearchSectionHeaderModel;

@interface SCSearchDiscoverStoriesSectionConfiguration : NSObject <NSCopying>
{
    NSString *_sectionTitle;
    NSString *_sectionType;
    SCSearchSectionHeaderModel *_sectionHeaderModel;
    NSArray *_discoverStories;
    long long _cellStyle;
}

@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, copy, nonatomic) NSArray *discoverStories; // @synthesize discoverStories=_discoverStories;
@property(readonly, copy, nonatomic) SCSearchSectionHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSectionTitle:(id)arg1 sectionType:(id)arg2 sectionHeaderModel:(id)arg3 discoverStories:(id)arg4 cellStyle:(long long)arg5;

@end

