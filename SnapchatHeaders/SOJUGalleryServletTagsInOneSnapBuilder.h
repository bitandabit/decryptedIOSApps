//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface SOJUGalleryServletTagsInOneSnapBuilder : NSObject
{
    NSArray *_locationTagList;
    NSArray *_timeTagList;
    NSArray *_metaTagList;
    NSDictionary *_visualTagToConfidenceMap;
    NSString *_languageId;
    NSString *_tagCluster;
    NSString *_locationCluster;
    NSString *_caption;
}

+ (id)withJUGalleryServletTagsInOneSnap:(id)arg1;
- (void).cxx_destruct;
- (id)setCaption:(id)arg1;
- (id)setLocationCluster:(id)arg1;
- (id)setTagCluster:(id)arg1;
- (id)setLanguageId:(id)arg1;
- (id)setVisualTagToConfidenceMap:(id)arg1;
- (id)setMetaTagList:(id)arg1;
- (id)setTimeTagList:(id)arg1;
- (id)setLocationTagList:(id)arg1;
- (id)build;

@end

