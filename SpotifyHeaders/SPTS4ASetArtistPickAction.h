//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL, UIApplication;

@interface SPTS4ASetArtistPickAction : SPAction
{
    NSURL *_entityUri;
    UIApplication *_uriOpener;
}

+ (_Bool)supportsEntityWithURI:(id)arg1;
@property(readonly, nonatomic) UIApplication *uriOpener; // @synthesize uriOpener=_uriOpener;
@property(readonly, copy, nonatomic) NSURL *entityUri; // @synthesize entityUri=_entityUri;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (_Bool)isEnabled;
- (id)logEntityURL;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithEntityURI:(id)arg1 uriOpener:(id)arg2 logContext:(id)arg3;

@end

