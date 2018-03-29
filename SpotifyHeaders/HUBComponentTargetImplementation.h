//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HUBAutoEquatable.h"

#import "HUBComponentTarget.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface HUBComponentTargetImplementation : HUBAutoEquatable <HUBComponentTarget>
{
    NSURL *_URI;
    id <HUBViewModel> _initialViewModel;
    NSArray *_actionIdentifiers;
    NSDictionary *_customData;
}

@property(readonly, copy, nonatomic) NSDictionary *customData; // @synthesize customData=_customData;
@property(readonly, nonatomic) NSArray *actionIdentifiers; // @synthesize actionIdentifiers=_actionIdentifiers;
@property(readonly, nonatomic) id <HUBViewModel> initialViewModel; // @synthesize initialViewModel=_initialViewModel;
@property(readonly, copy, nonatomic) NSURL *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)serializeActionIdentifiers;
- (id)serialize;
- (id)initWithURI:(id)arg1 initialViewModel:(id)arg2 actionIdentifiers:(id)arg3 customData:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

