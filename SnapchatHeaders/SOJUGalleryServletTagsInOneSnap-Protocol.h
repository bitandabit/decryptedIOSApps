//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol SOJUGalleryServletTagsInOneSnap <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *caption;
@property(readonly, copy, nonatomic) NSString *locationCluster;
@property(readonly, copy, nonatomic) NSString *tagCluster;
@property(readonly, copy, nonatomic) NSString *languageId;
@property(readonly, copy, nonatomic) NSDictionary *visualTagToConfidenceMap;
@property(readonly, copy, nonatomic) NSArray *metaTagList;
@property(readonly, copy, nonatomic) NSArray *timeTagList;
@property(readonly, copy, nonatomic) NSArray *locationTagList;
@end

