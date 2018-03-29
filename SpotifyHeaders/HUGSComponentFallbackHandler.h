//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBComponentFallbackHandler.h"

@class NSDictionary, NSString;

@interface HUGSComponentFallbackHandler : NSObject <HUBComponentFallbackHandler>
{
    NSDictionary *_fallbackComponentNames;
    id <HUBComponentFactory> _componentFactory;
}

@property(readonly, nonatomic) id <HUBComponentFactory> componentFactory; // @synthesize componentFactory=_componentFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *fallbackComponentNames; // @synthesize fallbackComponentNames=_fallbackComponentNames;
- (id)createFallbackComponentForCategory:(id)arg1;
@property(readonly, copy, nonatomic) NSString *defaultComponentCategory;
@property(readonly, copy, nonatomic) NSString *defaultComponentName;
@property(readonly, copy, nonatomic) NSString *defaultComponentNamespace;
- (id)initWithComponentFactory:(id)arg1;

@end

