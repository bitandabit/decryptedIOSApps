//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTContributingArtistsUIProvider.h"

@class NSArray, NSString;

@interface SPTContributingArtistsUIProviderImplementation : NSObject <SPTContributingArtistsUIProvider>
{
    NSArray *_artistsEntities;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTGLUEImageLoaderFactory> _glueImageLoaderFactory;
    id <SPTLogCenterProtocol> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenterProtocol> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) id <SPTGLUEImageLoaderFactory> glueImageLoaderFactory; // @synthesize glueImageLoaderFactory=_glueImageLoaderFactory;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) NSArray *artistsEntities; // @synthesize artistsEntities=_artistsEntities;
- (void).cxx_destruct;
- (id)provideContributingArtistsListPopoverViewController;
- (id)provideContributingArtistsListViewController;
- (id)initWithArtistEntities:(id)arg1 linkDispatcher:(id)arg2 glueImageLoaderFactory:(id)arg3 logCenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
