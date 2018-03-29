//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, SOJUBroadcastGroupModelLocation;

@interface SOJUBroadcastGroupApiCreatePublicationRequestBuilder : NSObject
{
    NSString *_idValue;
    NSString *_displayName;
    NSString *_privacy;
    NSArray *_posterUserIds;
    NSArray *_selectedAudienceUserIds;
    SOJUBroadcastGroupModelLocation *_geoFenceCenter;
}

+ (id)withJUBroadcastGroupApiCreatePublicationRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setGeoFenceCenter:(id)arg1;
- (id)setSelectedAudienceUserIds:(id)arg1;
- (id)setPosterUserIds:(id)arg1;
- (id)setPrivacy:(id)arg1;
- (id)setDisplayName:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)build;
- (id)setPrivacyEnum:(long long)arg1;

@end

