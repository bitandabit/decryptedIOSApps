//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionOverviewNavigationModelEntry.h"

@class NSString, NSURL;

@interface SPTCollectionOverviewNavigationModelEntryImplementation : NSObject <SPTCollectionOverviewNavigationModelEntry>
{
    NSString *_title;
    NSURL *_URL;
    long long _icon;
    unsigned long long _order;
}

@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

