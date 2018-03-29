//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAdEntity.h"

@class NSDictionary, NSString, NSURL, SPTAdFeaturedAction, SPTAdReward, UIColor;

@interface SPTAdEntity : NSObject <SPTAdEntity>
{
    _Bool _dummy;
    _Bool _preview;
    _Bool _skippable;
    _Bool _physicalButtonsSupported;
    _Bool _shouldShowAdChoicesIcon;
    NSString *_identifier;
    unsigned long long _skipDelaySecs;
    NSString *_advertiser;
    NSString *_title;
    double _duration;
    NSString *_actionText;
    NSURL *_clickthroughURL;
    SPTAdFeaturedAction *_featuredAction;
    SPTAdReward *_reward;
    NSURL *_coverArtURL;
    long long _product;
    UIColor *_creativeColor;
    NSString *_lineItemID;
    NSString *_creativeID;
    NSString *_slot;
    NSString *_dependentSlot;
    NSString *_offerTitle;
    NSString *_offerSubtitle;
    NSDictionary *_metadata;
}

@property(readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) _Bool shouldShowAdChoicesIcon; // @synthesize shouldShowAdChoicesIcon=_shouldShowAdChoicesIcon;
@property(readonly, copy, nonatomic) NSString *offerSubtitle; // @synthesize offerSubtitle=_offerSubtitle;
@property(readonly, copy, nonatomic) NSString *offerTitle; // @synthesize offerTitle=_offerTitle;
@property(readonly, copy, nonatomic) NSString *dependentSlot; // @synthesize dependentSlot=_dependentSlot;
@property(readonly, copy, nonatomic) NSString *slot; // @synthesize slot=_slot;
@property(readonly, copy, nonatomic) NSString *creativeID; // @synthesize creativeID=_creativeID;
@property(readonly, copy, nonatomic) NSString *lineItemID; // @synthesize lineItemID=_lineItemID;
@property(readonly, nonatomic) UIColor *creativeColor; // @synthesize creativeColor=_creativeColor;
@property(readonly, nonatomic) long long product; // @synthesize product=_product;
@property(readonly, nonatomic) NSURL *coverArtURL; // @synthesize coverArtURL=_coverArtURL;
@property(readonly, nonatomic) SPTAdReward *reward; // @synthesize reward=_reward;
@property(readonly, nonatomic, getter=isPhysicalButtonsSupported) _Bool physicalButtonsSupported; // @synthesize physicalButtonsSupported=_physicalButtonsSupported;
@property(readonly, nonatomic) SPTAdFeaturedAction *featuredAction; // @synthesize featuredAction=_featuredAction;
@property(readonly, nonatomic) NSURL *clickthroughURL; // @synthesize clickthroughURL=_clickthroughURL;
@property(readonly, copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *advertiser; // @synthesize advertiser=_advertiser;
@property(readonly, nonatomic) unsigned long long skipDelaySecs; // @synthesize skipDelaySecs=_skipDelaySecs;
@property(readonly, nonatomic, getter=isSkippable) _Bool skippable; // @synthesize skippable=_skippable;
@property(readonly, nonatomic, getter=isPreview) _Bool preview; // @synthesize preview=_preview;
@property(readonly, nonatomic, getter=isDummy) _Bool dummy; // @synthesize dummy=_dummy;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToAdEntity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isVideo;
- (id)parseCreativeColor:(id)arg1;
- (id)parseCoverArtURL:(id)arg1;
- (id)parseReward:(id)arg1;
- (long long)parseAdProduct:(id)arg1;
- (id)parseFeaturedAction:(id)arg1;
- (id)initWithMetadata:(id)arg1 slot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
