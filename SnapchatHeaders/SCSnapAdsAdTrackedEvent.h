//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapAdsBaseEvent.h"

@class SCSnapAdsIdentifier;
@protocol SCAdSource;

@interface SCSnapAdsAdTrackedEvent : SCSnapAdsBaseEvent
{
    SCSnapAdsIdentifier *_adIdentifier;
    id <SCAdSource> _adSource;
}

@property(retain, nonatomic) id <SCAdSource> adSource; // @synthesize adSource=_adSource;
@property(retain, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (void).cxx_destruct;

@end

