//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSnapAdsBaseEvent.h"

@class NSDictionary, NSString, SCSnapAdsIdentifier;

@interface SCSnapAdsAdPanelChangedEvent : SCSnapAdsBaseEvent
{
    SCSnapAdsIdentifier *_adIdentifier;
    long long _fromPanel;
    long long _toPanel;
    NSDictionary *_viewContext;
    long long _index;
    NSString *_sessionId;
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSDictionary *viewContext; // @synthesize viewContext=_viewContext;
@property(nonatomic) long long toPanel; // @synthesize toPanel=_toPanel;
@property(nonatomic) long long fromPanel; // @synthesize fromPanel=_fromPanel;
@property(retain, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (void).cxx_destruct;

@end

