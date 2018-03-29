//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTURISubtypeHandler.h"

@class NSString;

@interface SPTPageRegistryURISubtypeHandler : NSObject <SPTURISubtypeHandler>
{
    id <SPTMetaViewController> _metaViewController;
}

@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
- (void).cxx_destruct;
- (_Bool)isSettingsURI:(id)arg1;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (id)initWithMetaViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

