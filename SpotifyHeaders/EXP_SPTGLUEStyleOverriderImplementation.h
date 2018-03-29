//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUGSStyleOverrider.h"

@class NSString;

@interface EXP_SPTGLUEStyleOverriderImplementation : NSObject <EXP_HUGSStyleOverrider>
{
    id <EXP_SPTHubComponentModelURIResolver> _componentModelURIResolver;
}

+ (id)entityCardStyleForTheme:(id)arg1 imageStyle:(id)arg2;
+ (id)entityRowStyleForTheme:(id)arg1 targetURI:(id)arg2;
+ (id)entityCardStyleForTheme:(id)arg1 targetURI:(id)arg2;
@property(readonly, nonatomic) id <EXP_SPTHubComponentModelURIResolver> componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
- (void).cxx_destruct;
- (id)styleForComponentModel:(id)arg1 withDefaultStyle:(id)arg2 usingTheme:(id)arg3;
- (id)initWithComponentModelURIResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

