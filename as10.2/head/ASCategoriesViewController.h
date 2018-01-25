//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import "ASCategoriesNavigationControllerAppearanceDelegate-Protocol.h"
#import "ASCategoriesSelectionViewControllerDelegate-Protocol.h"
#import "SKUIAppNavigationControllerProviderProtocol-Protocol.h"
#import "SKUIModalSourceViewProvider-Protocol.h"
#import "SKUINavigationControllerProviding-Protocol.h"
#import "UISplitViewControllerDelegate-Protocol.h"

@class ASCategoriesSplitViewController, IKAppDocument, JSManagedValue, NSString, SKUINavigationDocumentController, UINavigationController, UITabBarItem;
@protocol ASNavigationItemProviding, IKAppNavigationController;

@interface ASCategoriesViewController : SKUIViewController <UISplitViewControllerDelegate, ASCategoriesSelectionViewControllerDelegate, ASCategoriesNavigationControllerAppearanceDelegate, SKUIModalSourceViewProvider, SKUINavigationControllerProviding, SKUIAppNavigationControllerProviderProtocol>
{
    UITabBarItem *_categoriesTabBarItem;
    UINavigationController *_detailNavigationController;
    JSManagedValue *_managedNavigationDocument;
    SKUINavigationDocumentController *_navigationDocumentController;
    IKAppDocument *_appDocument;
    UINavigationController *_errorNavigationController;
    UINavigationController *_leftNavigationController;
    id <ASNavigationItemProviding> _navigationItemProvidingDelegate;
    ASCategoriesSplitViewController *_splitViewController;
}

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
+ (_Bool)appExcludesNearby;
+ (Class)categoriesSelectionViewControllerClass;
+ (Class)leftNavigationControllerClass;
+ (Class)detailNavigationControllerClass;
+ (id)sharedInstance;
@property(readonly, nonatomic) UINavigationController *detailNavigationController; // @synthesize detailNavigationController=_detailNavigationController;
@property(readonly, nonatomic) ASCategoriesSplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(nonatomic) __weak id <ASNavigationItemProviding> navigationItemProvidingDelegate; // @synthesize navigationItemProvidingDelegate=_navigationItemProvidingDelegate;
@property(retain, nonatomic) UINavigationController *leftNavigationController; // @synthesize leftNavigationController=_leftNavigationController;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_nearMeLocationStatusDidChange:(id)arg1;
- (void)_handleCategoriesErrorNotification:(id)arg1;
- (void)_handleCategoriesSuccessNotification:(id)arg1;
- (void)_handleLocationStatusChange:(_Bool)arg1;
- (void)_presentLocationDialogIfNeeded;
- (void)_hideError;
- (void)_displayError;
- (id)_genericErrorString;
- (void)_updateSelectionViewControllerSelection:(id)arg1;
- (void)_setCategoriesRetainsHighlights:(_Bool)arg1;
- (void)_setEmptyPage;
- (void)_configureViewControllerNavigationItems:(id)arg1;
- (id)_generateDefaultViewController;
- (void)_informControllersOfClientContext:(id)arg1;
- (_Bool)documentViewControllerIsCompactForWidth:(double)arg1;
- (id)overlayNavigationController;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
- (_Bool)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3;
- (id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2;
- (void)navigationController:(id)arg1 didDisappearAnimated:(_Bool)arg2;
- (void)categorySelectionViewController:(id)arg1 selectedCategory:(id)arg2;
@property(readonly, nonatomic) id <IKAppNavigationController> appNavigationController;
- (id)tabBarItem;
- (void)setClientContext:(id)arg1;
- (void)handleTabBarReselect;
- (void)_configureNavigationItemUsingProviderIsCompact:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

