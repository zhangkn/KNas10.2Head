//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIClientContext.h>

@class NSBundle, SKUILocalizedStringDictionary;

@interface ASClientContext : SKUIClientContext
{
    NSBundle *_bundle;
    SKUILocalizedStringDictionary *_localizedStrings;
}

+ (id)localizedStringForKey:(id)arg1 inBundles:(id)arg2 inTable:(id)arg3;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (id)localizedAlertWithError:(id)arg1;
- (void)getDefaultMetricsControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)storeViewController:(id)arg1 shouldDisplayDefaultDarButton:(long long)arg2;
- (void)showSearchPage:(_Bool)arg1;
- (id)initWithConfigurationDictionary:(id)arg1;

@end

